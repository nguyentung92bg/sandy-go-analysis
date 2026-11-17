/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$RefreshItems
void Dino_BusSand_App_UI_HudPanel__RefreshItems (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$RefreshItems
   void Dino_BusSand_App_UI_HudPanel__RefreshItems (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar2 = PTR_DAT_04cb6a88;
                    /* try { // try from 0240994c to 0250994f has its CatchHandler @ 0240a44c */
  if ((bRam0000000004f9c527 & 1) == 0) {
                    /* try { // try from 02409950 to 0250995b has its CatchHandler @ 0240a488 */
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cb8128);
    FUN_02132f7c(PTR_DAT_04cb8130);
    FUN_02132f7c(PTR_DAT_04cb8138);
                    /* try { // try from 02409984 to 0250998b has its CatchHandler @ 0240a404 */
    FUN_02132f7c(PTR_DAT_04cb6a88);
                    /* try { // try from 0240998c to 0250999b has its CatchHandler @ 0240a400 */
    FUN_02132f7c(PTR_DAT_04cb8140);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 024099ac to 025099d3 has its CatchHandler @ 0240a460 */
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c527 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_70 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_UI_HudPanel__get_FooterShown_230b8d8();
  lVar10 = *(long *)puVar1;
  uVar11 = *(undefined8 *)(param_1 + 0x60);
                    /* try { // try from 024099ec to 02509a43 has its CatchHandler @ 0240a4ac */
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar10);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if ((uVar9 & 1) != 0) {
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0),
       lVar10 == 0)) goto LAB_02409bfc;
    uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar10,0);
    if ((uVar5 & 1) != (uVar6 & 1)) {
      if ((*(long *)(param_1 + 0x60) == 0) ||
         (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0),
         lVar10 == 0)) goto LAB_02409bfc;
                    /* try { // try from 02409a54 to 02509a5f has its CatchHandler @ 0240a48c */
      UnityEngine_GameObject__SetActive_43c1408(lVar10,uVar5 & 1,0);
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0xf8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02409a78 to 02509a7b has its CatchHandler @ 0240a3fc */
                    /* try { // try from 02409a7c to 02509a8b has its CatchHandler @ 0240a474 */
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
  if ((uVar9 & 1) != 0) {
    if ((*(long *)(param_1 + 0xf8) == 0) ||
       (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xf8),0),
       lVar10 == 0)) goto LAB_02409bfc;
    uVar6 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar10,0);
    if ((uVar5 & 1) != (uVar6 & 1)) {
                    /* try { // try from 02409ab4 to 02509ab7 has its CatchHandler @ 0240a3e4 */
                    /* try { // try from 02409ab8 to 02509abf has its CatchHandler @ 0240a410 */
      if ((*(long *)(param_1 + 0xf8) == 0) ||
         (lVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xf8),0),
         lVar10 == 0)) goto LAB_02409bfc;
      UnityEngine_GameObject__SetActive_43c1408(lVar10,uVar5 & 1,0);
    }
  }
  puVar4 = PTR_DAT_04cb8130;
  puVar3 = PTR_DAT_04cb8128;
  puVar1 = PTR_DAT_04cb1c70;
  puVar2 = PTR_DAT_04cabaf8;
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 02409adc to 02509b03 has its CatchHandler @ 0240a464 */
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_98,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb8140);
                    /* try { // try from 02409b14 to 02509b1b has its CatchHandler @ 0240a4ac */
    lStack_70 = lStack_88;
    uStack_78 = puStack_90;
    uStack_80 = uStack_98;
    uStack_98 = 0;
    puStack_90 = &uStack_80;
    while( true ) {
      uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_80,*(undefined8 *)puVar4);
      lVar10 = lStack_70;
      if ((uVar9 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)puVar3);
                    /* try { // try from 02409bdc to 02509bdf has its CatchHandler @ 0240a3f4 */
                    /* try { // try from 02409be0 to 02509bef has its CatchHandler @ 0240a45c */
        return;
      }
                    /* try { // try from 02409b34 to 02509b8b has its CatchHandler @ 0240a490 */
      if (lStack_70 == 0) break;
      uVar7 = Dino_BusSand_App_UI_HudPanel__StateOf_230d45c(uVar9,*(undefined4 *)(lStack_70 + 0x10))
      ;
      lVar12 = *(long *)(lVar10 + 0x18);
      uVar8 = *(undefined4 *)(lVar10 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_App_Meta_Profile__Count_225b150(uVar8,0);
      uVar11 = Dino_BusSand_App_CheatFlags__Usable_214f578(uVar11,0);
      uVar8 = *(undefined4 *)(lVar10 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(uVar8,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 02409b9c to 02509ba7 has its CatchHandler @ 0240a478 */
                    /* try { // try from 02409bb8 to 02509bc3 has its CatchHandler @ 0240a440 */
      Dino_BusSand_App_UI_KitBoosterButton__Set_2288aac
                (lVar12,uVar7,uVar11,uVar8,*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x48),0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02409bfc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

