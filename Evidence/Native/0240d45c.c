/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$StateOf
int32_t Dino_BusSand_App_UI_HudPanel__StateOf (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$StateOf
   int32_t Dino_BusSand_App_UI_HudPanel__StateOf (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t
   id, const MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_HudPanel__StateOf_230d45c(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cabaf8;
                    /* try { // try from 0240d464 to 0250d47b has its CatchHandler @ 0240d4a8 */
                    /* try { // try from 0240d47c to 0250d4c3 has its CatchHandler @ 0240d370 */
  uStack_24 = param_2;
  if ((bRam0000000004f9c526 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1c70);
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240d444 with catch @ 0240d4a4
                        */
    FUN_02132f7c(PTR_DAT_04cb1980);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240d464 with catch @ 0240d4a8
                        */
    bRam0000000004f9c526 = 1;
  }
  puVar2 = PTR_DAT_04cb1c70;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0240d4c4 to 0250d4c7 has its CatchHandler @ 0240d4e0 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0240d4c8 to 0250d4e3 has its CatchHandler @ 0240d370 */
  iVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0240d4c4 with catch @ 0240d4e0 */
                    /* try { // try from 0240d4e4 to 0250d4eb has its CatchHandler @ 0240d4f4 */
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
                    /* try { // try from 0240d4ec to 0250d4f7 has its CatchHandler @ 0240d370 */
  iVar4 = Dino_BusSand_App_Meta_BoosterIntro__Level_2202754(param_2,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240d4e4 with catch @ 0240d4f4
                        */
                    /* try { // try from 0240d4f8 to 0250d617 has its CatchHandler @ 0240d4f8
                       catch() { ... } // from try @ 0240d4f8 with catch @ 0240d4f8
                       catch() { ... } // from try @ 0240d698 with catch @ 0240d4f8
                       catch() { ... } // from try @ 0240d6c8 with catch @ 0240d4f8
                       catch() { ... } // from try @ 0240d6f0 with catch @ 0240d4f8
                       catch() { ... } // from try @ 0240d714 with catch @ 0240d4f8 */
  if (iVar3 < iVar4) {
    uVar8 = 0;
  }
  else {
    if (iVar3 == iVar4) {
      uVar5 = System_Int32__ToString_482d750(&uStack_24,0);
      uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb1980,uVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar6 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar5,0);
      param_2 = uStack_24;
      if ((uVar6 & 1) == 0) {
        return 1;
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_2,0);
    lVar7 = Dino_BusSand_App_CheatFlags__Usable_214f578(uVar5,0);
    uVar8 = 2;
    if (lVar7 < 1) {
      uVar8 = 3;
    }
  }
  return uVar8;
}

