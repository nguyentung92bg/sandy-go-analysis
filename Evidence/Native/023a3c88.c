/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$.ctor
void Dino_BusSand_App_UI_UiTweaks___ctor (Dino_BusSand_App_UI_UiTweaks_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$.ctor
   void Dino_BusSand_App_UI_UiTweaks___ctor (Dino_BusSand_App_UI_UiTweaks_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UiTweaks___ctor_22a3c88(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_04cb5b78;
  puVar1 = PTR_DAT_04cb5b70;
  if ((bRam0000000004f9c279 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5b78);
    FUN_02132f7c(PTR_DAT_04cb5b70);
    bRam0000000004f9c279 = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004fa8588 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,0);
    bRam0000000004fa8588 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Object___ctor_43c663c(param_1,0);
  if (pcRam0000000004fa8590 == (code *)0x0) {
    pcRam0000000004fa8590 = (code *)FUN_02132f40(&UNK_00e3b9b1);
  }
                    /* WARNING: Could not recover jumptable at 0x044c4b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000004fa8590)(param_1);
  return;
}

