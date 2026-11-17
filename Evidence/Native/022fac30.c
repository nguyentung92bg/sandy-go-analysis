/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<RunMechanic>d__6$$<>m__Finally1
void Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6____m__Finally1 (Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0239de28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<RunMechanic>d__6$$<>m__Finally1
   void Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6____m__Finally1
   (Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6____m__Finally1_21fac30(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dVar7;
  
  if ((bRam0000000004f9bc63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1960);
                    /* try { // try from 022fac54 to 023fac57 has its CatchHandler @ 022fac58 */
                    /* catch() { ... } // from try @ 022fac54 with catch @ 022fac58
                       try { // try from 022fac58 to 023fac73 has its CatchHandler @ 022fabd4 */
    bRam0000000004f9bc63 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = *(undefined8 *)PTR_DAT_04cb1960;
                    /* try { // try from 022fac84 to 023fac87 has its CatchHandler @ 022fac94 */
  if ((bRam0000000004f9c23e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa000,0,uVar6,0);
    FUN_02132f7c(PTR_DAT_04cb5870);
    FUN_02132f7c(PTR_DAT_04cb5878);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c23e = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)(lVar3 + 0xa8);
  if (lVar4 == 0) {
LAB_0239df08:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(lVar4 + 0x20);
  System_Collections_Generic_HashSet_object___Remove_37e5c2c
            (lVar4,uVar6,*(undefined8 *)PTR_DAT_04cb5870);
  uVar6 = *(undefined8 *)(lVar3 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(lVar3 + 0xa8) == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_0239df08;
    *(bool *)(*(long *)(lVar3 + 0x38) + 0x40) = 0 < *(int *)(*(long *)(lVar3 + 0xa8) + 0x20);
  }
  if (iVar1 < 1) {
    if (*(long *)(lVar3 + 0xa8) == 0) goto LAB_0239df08;
    if (0 < *(int *)(*(long *)(lVar3 + 0xa8) + 0x20)) {
      lVar3 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar3);
      if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caba90);
      }
      puVar2 = PTR_DAT_04caba90;
      if ((bRam0000000004f9bd97 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caba90,0);
        bRam0000000004f9bd97 = 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(lVar3);
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar2;
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar6 = *(undefined8 *)(lVar3 + 0x78);
        lVar3 = **(long **)(lVar4 + 0xb8);
        dVar7 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = -0x8000000000000000;
        if (dVar7 * _UNK_00e6a6f0 != INFINITY) {
          lVar4 = (long)(dVar7 * _UNK_00e6a6f0);
        }
        Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104(0,lVar3,uVar6,lVar4,0,0,0,0);
      }
      return;
    }
  }
  return;
}

