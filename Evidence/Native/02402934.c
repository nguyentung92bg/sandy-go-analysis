/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetTab
void Dino_BusSand_App_UI_PlayerSettingPanel__SetTab (Dino_BusSand_App_UI_PlayerSettingPanel_o* __this, System_String_o* btn, System_String_o* txt, System_String_o* spritePrefix, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingPanel$$SetTab
   void Dino_BusSand_App_UI_PlayerSettingPanel__SetTab (Dino_BusSand_App_UI_PlayerSettingPanel_o*
   __this, System_String_o* btn, System_String_o* txt, System_String_o* spritePrefix, bool on, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_PlayerSettingPanel__SetTab_2302934
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_04cb1110;
  puVar5 = PTR_DAT_04caebe8;
  puVar1 = (undefined8 *)PTR_DAT_04caccf0;
  puVar4 = PTR_DAT_04cab490;
                    /* try { // try from 02402950 to 02502957 has its CatchHandler @ 024029a8 */
                    /* try { // try from 02402958 to 0250299b has its CatchHandler @ 02402754 */
  if ((bRam0000000004f9c4da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48);
                    /* try { // try from 0240299c to 0250299f has its CatchHandler @ 024029a4 */
                    /* try { // try from 024029a0 to 025029c3 has its CatchHandler @ 02402754 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240299c with catch @ 024029a4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02402950 with catch @ 024029a8
                        */
    FUN_02132f7c(PTR_DAT_04caebe8);
    FUN_02132f7c(PTR_DAT_04cab490);
                    /* try { // try from 024029c4 to 025029c7 has its CatchHandler @ 024029e8 */
    FUN_02132f7c(PTR_DAT_04cb1110);
                    /* try { // try from 024029c8 to 025029eb has its CatchHandler @ 02402754 */
    FUN_02132f7c(PTR_DAT_04caccf0);
    bRam0000000004f9c4da = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 024029c4 with catch @ 024029e8 */
                    /* try { // try from 024029ec to 025029f3 has its CatchHandler @ 024029fc */
  lVar7 = Dino_BusSand_App_UI_UIPanel__Get_object__29460d0(param_1,param_2,*(undefined8 *)puVar5);
                    /* try { // try from 024029f4 to 025029ff has its CatchHandler @ 02402754 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024029ec with catch @ 024029fc
                        */
  if ((param_5 & 1) == 0) {
    puVar1 = (undefined8 *)puVar6;
  }
  uVar8 = System_String__Concat_46c82e0(param_4,*puVar1,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  uVar8 = Dino_BusSand_App_UiAssets__Sprite_21636c4(uVar8,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      if (lVar7 == 0) goto LAB_02402b94;
      UnityEngine_UI_Image__set_sprite_44a7258(lVar7,uVar8,0);
    }
  }
  lVar7 = 0x88;
  if ((param_5 & 1) == 0) {
    lVar7 = 0x90;
  }
  uVar8 = *(undefined8 *)(param_1 + lVar7);
  lVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,param_3,0);
                    /* try { // try from 02402ac4 to 02502e73 has its CatchHandler @ 02402ac4
                       catch() { ... } // from try @ 02402ac4 with catch @ 02402ac4
                       catch() { ... } // from try @ 02402f0c with catch @ 02402ac4
                       catch() { ... } // from try @ 02403064 with catch @ 02402ac4
                       catch() { ... } // from try @ 0240312c with catch @ 02402ac4
                       catch() { ... } // from try @ 02403170 with catch @ 02402ac4
                       catch() { ... } // from try @ 0240319c with catch @ 02402ac4
                       catch() { ... } // from try @ 024031c4 with catch @ 02402ac4
                       catch() { ... } // from try @ 024031f0 with catch @ 02402ac4 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
    if ((uVar9 & 1) == 0) {
      if ((lVar7 == 0) ||
         (lVar7 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                            (lVar7,1,*(undefined8 *)PTR_DAT_04cada48), lVar7 == 0)) {
LAB_02402b94:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar2) {
        lVar11 = 0;
        do {
          if (uVar2 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar10 = *(long **)(lVar7 + 0x20 + lVar11 * 8);
          if (plVar10 == (long *)0x0) goto LAB_02402b94;
          (**(code **)(*plVar10 + 0x538))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x540));
          uVar2 = *(uint *)(lVar7 + 0x18);
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < (int)uVar2);
      }
    }
  }
  return;
}

