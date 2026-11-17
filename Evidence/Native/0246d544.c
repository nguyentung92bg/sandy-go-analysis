/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c$$<OnOpen>b__14_31
void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_31 (Dino_BusSand_Cheat_CheatMobilePanel___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c$$<OnOpen>b__14_31
   void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_31
   (Dino_BusSand_Cheat_CheatMobilePanel___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatMobilePanel___c___OnOpen_b__14_31_236d544(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_04cab748;
  puVar4 = PTR_DAT_04cab740;
  puVar3 = PTR_DAT_04caa038;
                    /* try { // try from 0246d580 to 0256d7af has its CatchHandler @ 0246d580
                       catch() { ... } // from try @ 0246d580 with catch @ 0246d580
                       catch() { ... } // from try @ 0246d9d0 with catch @ 0246d580
                       catch() { ... } // from try @ 0246da88 with catch @ 0246d580
                       catch() { ... } // from try @ 0246db18 with catch @ 0246d580 */
  if ((bRam0000000004f9c7b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04caccc8);
    FUN_02132f7c(PTR_DAT_04cacac8);
    FUN_02132f7c(PTR_DAT_04cacb68);
    FUN_02132f7c(PTR_DAT_04cacb88);
    FUN_02132f7c(PTR_DAT_04caca98);
    bRam0000000004f9c7b1 = 1;
  }
  uStack_68 = 0;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar7,*(undefined8 *)puVar4);
  lVar8 = FUN_02133068(*(undefined8 *)puVar3,3);
  if (lVar8 == 0) {
LAB_0246d884:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar8 + 0x18) != 0) {
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_04caca98;
    thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20));
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)PTR_DAT_04cacb88;
      thunk_FUN_02134474((undefined8 *)(lVar8 + 0x28));
      if (2 < *(uint *)(lVar8 + 0x18)) {
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_04cacb68;
        thunk_FUN_02134474((undefined8 *)(lVar8 + 0x30));
        puVar6 = PTR_DAT_04caccc8;
        puVar5 = PTR_DAT_04cacac8;
        puVar4 = PTR_DAT_04cabaa8;
        puVar3 = PTR_DAT_04cab718;
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar14 = 0;
          uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar14) goto LAB_0246d888;
            uVar13 = *(undefined8 *)(lVar8 + 0x20 + uVar14 * 8);
            if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar9 = Dino_BusSand_App_Meta_GameTracking__AdPlacement_22155d8(uVar13,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar10 = Dino_BusSand_App_Ads__CanShowInterstitial_21763a0(uVar13,&uStack_68,0);
            puVar1 = (undefined8 *)puVar5;
            if ((uVar10 & 1) == 0) {
              puVar1 = &uStack_68;
            }
            uVar13 = System_String__Concat_46d2b84(uVar9,*(undefined8 *)puVar6,*puVar1,0);
            if (lVar7 == 0) goto LAB_0246d884;
            lVar11 = *(long *)(lVar7 + 0x10);
            lVar12 = *(long *)puVar3;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0246d884;
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                    /* try { // try from 0246d7b0 to 0256d7d7 has its CatchHandler @ 0246dae4 */
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar7,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
        puVar3 = PTR_DAT_04caba50;
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
                    /* try { // try from 0246d814 to 0256d83b has its CatchHandler @ 0246dae0 */
          cRam0000000004f9b88f = '\x01';
        }
        lVar8 = *(long *)puVar3;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar3;
        }
        lVar8 = **(long **)(lVar8 + 0xb8);
        if (lVar8 != 0) {
                    /* try { // try from 0246d844 to 0256d84b has its CatchHandler @ 0246dad4 */
                    /* try { // try from 0246d850 to 0256d857 has its CatchHandler @ 0246dad8 */
          uVar13 = System_String__Join_46d39a4(*(undefined8 *)PTR_DAT_04caa398,lVar7,0);
                    /* try { // try from 0246d858 to 0256d863 has its CatchHandler @ 0246dacc */
          Dino_BusSand_App_GameApp__Toast_2166a6c(lVar8,uVar13,0);
        }
                    /* try { // try from 0246d874 to 0256d87f has its CatchHandler @ 0246dac0 */
                    /* try { // try from 0246d880 to 0256d88b has its CatchHandler @ 0246dabc */
        return;
      }
    }
  }
LAB_0246d888:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

