/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<TowerBus>b__41_0
bool Dino_BusSand_Cheat_AutoQa___c___TowerBus_b__41_0 (Dino_BusSand_Cheat_AutoQa___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044c6fd8) */
/* WARNING: Removing unreachable block (ram,0x044c7008) */
/* WARNING: Removing unreachable block (ram,0x044c701c) */
/* WARNING: Removing unreachable block (ram,0x044c7020) */
/* WARNING: Removing unreachable block (ram,0x044c6fdc) */
/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<>c$$<TowerBus>b__41_0
   bool Dino_BusSand_Cheat_AutoQa___c___TowerBus_b__41_0 (Dino_BusSand_Cheat_AutoQa___c_o* __this,
   const MethodInfo* method); */

bool Dino_BusSand_Cheat_AutoQa___c___TowerBus_b__41_0_234579c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cb9568;
                    /* try { // try from 024457b4 to 025457bb has its CatchHandler @ 02445864 */
  if ((bRam0000000004f9c6ce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac850);
    FUN_02132f7c(PTR_DAT_04cb7508);
                    /* try { // try from 024457ec to 02545803 has its CatchHandler @ 02445860 */
    bRam0000000004f9c6ce = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = Dino_BusSand_Cheat_AutoQa__get_Ui_2341014();
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar4 != 0) {
                    /* try { // try from 0244581c to 0254582f has its CatchHandler @ 0244585c */
    lVar4 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                      (lVar4,*(undefined8 *)PTR_DAT_04cac850);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 02445830 to 0254587f has its CatchHandler @ 024456fc */
      lVar4 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar4,*(undefined8 *)PTR_DAT_04cb7508,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244581c with catch @ 0244585c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024457ec with catch @ 02445860
                        */
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024457b4 with catch @ 02445864
                        */
    if ((uVar5 & 1) != 0) {
      if ((lVar4 == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar4 == 0))
      goto LAB_024458dc;
                    /* try { // try from 02445880 to 02545883 has its CatchHandler @ 0244589c */
      uVar5 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar4,0);
                    /* try { // try from 02445884 to 0254589f has its CatchHandler @ 024456fc */
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = Dino_BusSand_Cheat_AutoQa__TopPopup_2342698();
                    /* catch() { ... } // from try @ 02445880 with catch @ 0244589c */
        lVar6 = *(long *)puVar1;
                    /* try { // try from 024458a0 to 025458a7 has its CatchHandler @ 024458b0 */
                    /* try { // try from 024458a8 to 025458b3 has its CatchHandler @ 024456fc */
        if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024458a0 with catch @ 024458b0
                        */
          thunk_FUN_0218fdac(lVar6);
        }
                    /* try { // try from 024458b4 to 025459b3 has its CatchHandler @ 024458b4
                       catch() { ... } // from try @ 024458b4 with catch @ 024458b4
                       catch() { ... } // from try @ 024459fc with catch @ 024458b4
                       catch() { ... } // from try @ 02445a68 with catch @ 024458b4
                       catch() { ... } // from try @ 02445a8c with catch @ 024458b4 */
        puVar2 = PTR_DAT_04ca9ae8;
        if ((bRam0000000004fa8637 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
          bRam0000000004fa8637 = 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if ((bRam0000000004fa85fa & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004fa85fa = 1;
        }
        if (lVar4 == 0) {
          bVar3 = true;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          bVar3 = *(long *)(lVar4 + 0x10) == 0;
        }
        return bVar3;
      }
    }
    return false;
  }
LAB_024458dc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

