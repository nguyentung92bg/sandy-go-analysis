/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$OnClose
void Dino_BusSand_App_UI_PassportPanel__OnClose (Dino_BusSand_App_UI_PassportPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$OnClose
   void Dino_BusSand_App_UI_PassportPanel__OnClose (Dino_BusSand_App_UI_PassportPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportPanel__OnClose_21d45b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  puVar5 = PTR_DAT_04cb0560;
  puVar3 = PTR_DAT_04caef48;
  puVar2 = PTR_DAT_04caa458;
  if ((bRam0000000004f9bb4d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cb0560);
    FUN_02132f7c(PTR_DAT_04cb04f8);
                    /* try { // try from 022d4624 to 023d4627 has its CatchHandler @ 022d4680 */
                    /* try { // try from 022d4628 to 023d462b has its CatchHandler @ 022d466c */
    bRam0000000004f9bb4d = 1;
  }
                    /* catch() { ... } // from try @ 022d4584 with catch @ 022d462c
                       try { // try from 022d462c to 023d4693 has its CatchHandler @ 022d43f8 */
  puVar4 = PTR_DAT_04cb04f8;
  puVar1 = PTR_DAT_04ca9ae8;
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 022d4574 with catch @ 022d464c */
  System_Action___ctor_47b5ed0(uVar6,param_1,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 022d455c with catch @ 022d4668 */
                    /* catch() { ... } // from try @ 022d4514 with catch @ 022d466c
                       catch() { ... } // from try @ 022d4628 with catch @ 022d466c */
  Dino_BusSand_App_Meta_PassportFeature__remove_Changed_22442b0(uVar6,0);
                    /* catch() { ... } // from try @ 022d449c with catch @ 022d4680
                       catch() { ... } // from try @ 022d4624 with catch @ 022d4680 */
  uVar6 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* catch() { ... } // from try @ 022d4a5c with catch @ 022d4694 */
  uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar6,param_1,0);
  if ((uVar7 & 1) != 0) {
    **(undefined8 **)(*(long *)puVar4 + 0xb8) = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar4 + 0xb8) >> 0xc & 0x3f),
                   (*(ulong *)(*(long *)puVar4 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

