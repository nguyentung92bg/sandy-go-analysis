/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Pack
System_Single_array* Dino_BusSand_App_UI_HomeToonFace__Pack (Dino_BusSand_App_UI_HomeToonFace_Pose_o p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonFace$$Pack
   System_Single_array* Dino_BusSand_App_UI_HomeToonFace__Pack
   (Dino_BusSand_App_UI_HomeToonFace_Pose_o p, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonFace__Pack_22f1a18(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9c46d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9c46d = 1;
  }
  lVar3 = FUN_02133068(*(undefined8 *)puVar2,5);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 != 0) {
      *(undefined4 *)(lVar3 + 0x20) = *param_1;
      if (uVar1 != 1) {
        *(undefined4 *)(lVar3 + 0x24) = param_1[1];
        if (2 < uVar1) {
          *(undefined4 *)(lVar3 + 0x28) = param_1[2];
          if (uVar1 != 3) {
            *(undefined4 *)(lVar3 + 0x2c) = param_1[3];
            if (4 < uVar1) {
              *(undefined4 *)(lVar3 + 0x30) = param_1[4];
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

