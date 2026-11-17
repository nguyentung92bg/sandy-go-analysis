/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$OnTermsClick
void Dino_BusSand_App_UI_SettingPanel__OnTermsClick (Dino_BusSand_App_UI_SettingPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SettingPanel$$OnTermsClick
   void Dino_BusSand_App_UI_SettingPanel__OnTermsClick (Dino_BusSand_App_UI_SettingPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_SettingPanel__OnTermsClick_2306ff8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_04cab1e8;
                    /* try { // try from 02406ffc to 02507047 has its CatchHandler @ 02407404 */
  if ((bRam0000000004f9c500 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cb7fa8);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9c500 = 1;
  }
  puVar3 = PTR_DAT_04cad948;
  puVar1 = PTR_DAT_04caa210;
                    /* try { // try from 02407058 to 025070bf has its CatchHandler @ 024074e4 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb7fa8;
  Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = *(long *)puVar2;
  uVar5 = 0;
  if ((bRam0000000004fa5a69 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210,0);
    FUN_02132f7c(PTR_DAT_04cf5680);
    FUN_02132f7c(PTR_DAT_04cd5630);
    bRam0000000004fa5a69 = 1;
    uVar5 = extraout_x1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (lVar4 == 0) {
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else if (*(int *)(lVar4 + 0x10) == 0) {
    uVar5 = System_UIntPtr__op_Explicit_488617c(1,0);
    uVar5 = System_UIntPtr__op_Explicit_4886184(uVar5,0);
    uStack_30 = 0;
    uStack_28 = 0;
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140(&uStack_30,uVar5,0,0);
    uStack_48 = uStack_28;
    uStack_50 = uStack_30;
  }
  else {
    if (cRam0000000004fa1b52 == '\0') {
      FUN_02132f7c(PTR_DAT_04cc73d8,uVar5);
      cRam0000000004fa1b52 = '\x01';
    }
    uStack_40 = System_String__GetRawStringData_46cfab8(lVar4,0);
    uStack_38 = (ulong)*(uint *)(lVar4 + 0x10);
    uVar5 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                      (&uStack_40,*(undefined8 *)PTR_DAT_04cf5680);
    UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
              (&uStack_50,uVar5,uStack_38 & 0xffffffff,0);
  }
  if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (pcRam0000000004fa5b18 == (code *)0x0) {
    pcRam0000000004fa5b18 = (code *)FUN_02132f40(&UNK_00e5e6a0);
  }
  (*pcRam0000000004fa5b18)(&uStack_50);
  return;
}

