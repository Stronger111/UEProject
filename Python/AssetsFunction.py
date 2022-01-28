import unreal

texture_tga='D:/Project/GithubProject/UEProject/UEProject/MyAssets/MyT_Brick_Clay_Beveled_D.TGA'
sound_wav='D:/Project/GithubProject/UEProject/UEProject/MyAssets/MyCollapse01.WAV'

def buildImportTask(filename,destination_path):
   task=unreal.AssetImportTask()
   task.set_editor_property("automated",True)
   task.set_editor_property("destination_name",'')
   task.set_editor_property('destination_path',destination_path)
   task.set_editor_property('filename',filename)
   task.set_editor_property('replace_existing',True)
   task.set_editor_property('save',True)
   return task

def execteImportTasks(tasks):
    unreal.AssetToolsHelpers.get_asset_tools().import_assset_tasks(tasks)
    for task in tasks:
        for path in task.get_editor_property('import_object_paths'):
            print ('Imported:%s') % path


