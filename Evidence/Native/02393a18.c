/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Start
void Dino_BusSand_App_Meta_WinStreak__Start (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WinStreak$$Start
   void Dino_BusSand_App_Meta_WinStreak__Start (const MethodInfo* method); */

void Dino_BusSand_App_Meta_WinStreak__Start_2293a18(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9c1ef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb5480);
    FUN_02132f7c(PTR_DAT_04cb5488);
    bRam0000000004f9c1ef = 1;
  }
  lVar7 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0();
  if (lVar7 != 0) {
    if ((*(char *)(lVar7 + 0x14) != '\0') &&
       (iVar1 = *(int *)(lVar7 + 0x10),
       iVar5 = Dino_BusSand_App_Meta_WinStreak__get_CurrentCycle_2293290(), iVar5 <= iVar1)) {
      return;
    }
    uVar6 = Dino_BusSand_App_Meta_WinStreak__get_CurrentCycle_2293290();
    *(undefined4 *)(lVar7 + 0x10) = uVar6;
    *(undefined1 *)(lVar7 + 0x14) = 1;
    lVar10 = *(long *)(lVar7 + 0x20);
    *(undefined8 *)(lVar7 + 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x2c) = 0xffffffff00000000;
    puVar2 = PTR_DAT_04ca9c20;
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      Dino_BusSand_App_Meta_WinStreak__Store_229359c();
      plVar8 = (long *)FUN_02133068(*(undefined8 *)puVar2,2);
      puVar2 = PTR_DAT_04cb5480;
      if (plVar8 != (long *)0x0) {
        if ((*(long *)PTR_DAT_04cb5480 != 0) &&
           (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb5480,*(undefined8 *)(*plVar8 + 0x40)),
           lVar10 == 0)) {
LAB_02393bf0:
          uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar9,0);
        }
        if ((int)plVar8[3] != 0) {
          plVar8[4] = *(long *)puVar2;
          thunk_FUN_02134474();
          uStack_34 = *(undefined4 *)(lVar7 + 0x10);
          lVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
          if ((lVar7 != 0) &&
             (lVar10 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_02393bf0;
          puVar4 = PTR_DAT_04cb5488;
          puVar3 = PTR_DAT_04cac5c0;
          puVar2 = PTR_DAT_04cac498;
          if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
            plVar8[5] = lVar7;
            thunk_FUN_02134474(plVar8 + 5,lVar7);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar4,plVar8,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
                    /* try { // try from 02393bd0 to 02493ef3 has its CatchHandler @ 02393bd0
                       catch() { ... } // from try @ 02393bd0 with catch @ 02393bd0
                       catch() { ... } // from try @ 02393f70 with catch @ 02393bd0
                       catch() { ... } // from try @ 023940a0 with catch @ 02393bd0
                       catch() { ... } // from try @ 023940ec with catch @ 02393bd0
                       catch() { ... } // from try @ 02394144 with catch @ 02393bd0
                       catch() { ... } // from try @ 02394170 with catch @ 02393bd0
                       catch() { ... } // from try @ 02394194 with catch @ 02393bd0
                       catch() { ... } // from try @ 023941c0 with catch @ 02393bd0 */
            Dino_BusSand_App_Meta_GameTracking__TowerBusJoined_221a248(0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

