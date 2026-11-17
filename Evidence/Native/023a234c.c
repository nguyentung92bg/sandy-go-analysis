/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$get_Ready
bool Dino_BusSand_App_UI_UiSkin__get_Ready (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$get_Ready
   bool Dino_BusSand_App_UI_UiSkin__get_Ready (const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UiSkin__get_Ready_22a234c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cb59d8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c267 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb59d8);
    bRam0000000004f9c267 = 1;
  }
  uVar5 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    uVar5 = 0;
    if (lVar4 != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(0,0);
      }
      lVar6 = *(long *)(lVar4 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
      }
      if (pcRam0000000004fa8240 == (code *)0x0) {
        pcRam0000000004fa8240 = (code *)FUN_02132f40(&UNK_00e58441);
      }
                    /* WARNING: Could not recover jumptable at 0x044b7d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*pcRam0000000004fa8240)(lVar6);
      return uVar5;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

