/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Ground
UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeToonRig__Ground (Dino_BusSand_App_UI_HomeToonRig_o* __this, UnityEngine_Vector3_o model, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Ground
   UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeToonRig__Ground (Dino_BusSand_App_UI_HomeToonRig_o*
   __this, UnityEngine_Vector3_o model, const MethodInfo* method); */

undefined4
Dino_BusSand_App_UI_HomeToonRig__Ground_22f57b4
          (float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_38;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  lVar1 = *(long *)(param_4 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  fStack_2c = param_1 * _UNK_00e20270;
  fStack_24 = param_3 * _UNK_00e20270;
  fStack_28 = param_2 * _UNK_00e20270;
  if ((bRam0000000004fa8b5d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b5d = 1;
  }
  uStack_30 = 0;
  uStack_38 = 0;
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000004fa8c88 == (code *)0x0) {
        pcRam0000000004fa8c88 = (code *)FUN_02132f40(&UNK_00e5acb6);
      }
      (*pcRam0000000004fa8c88)(lVar1,&fStack_2c,&uStack_38);
      return (undefined4)uStack_38;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

