/* IL2CPP: Dino.BusSand.View.StageLayout$$get_FacingRotation
UnityEngine_Quaternion_o Dino_BusSand_View_StageLayout__get_FacingRotation (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.StageLayout$$get_FacingRotation
   UnityEngine_Quaternion_o Dino_BusSand_View_StageLayout__get_FacingRotation (const MethodInfo*
   method); */

undefined4 Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(void)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cbc250;
  if ((bRam0000000004f9ca8f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca8f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uStack_30 = 0;
  uStack_28 = 0;
  if (pcRam0000000004fa7fa8 == (code *)0x0) {
    pcRam0000000004fa7fa8 = (code *)FUN_02132f40(&UNK_00e28e33);
  }
  (*pcRam0000000004fa7fa8)(&stack0xffffffffffffffe4,&uStack_30);
  return (undefined4)uStack_30;
}

