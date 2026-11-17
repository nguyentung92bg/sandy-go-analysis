/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<RunMechanic>d__6$$System.IDisposable.Dispose
void Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6__System_IDisposable_Dispose (Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0239de28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<RunMechanic>d__6$$System.IDisposable.Dispose
   void Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6__System_IDisposable_Dispose
   (Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6__System_IDisposable_Dispose_21fa240
               (long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  
  uVar1 = *(int *)(param_1 + 0x10) + 3;
  if (5 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x31U) == 0) {
    return;
  }
  if ((bRam0000000004f9bc63 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1960);
    bRam0000000004f9bc63 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar7 = *(undefined8 *)PTR_DAT_04cb1960;
  if ((bRam0000000004f9c23e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa000,0,uVar7,0);
    FUN_02132f7c(PTR_DAT_04cb5870);
    FUN_02132f7c(PTR_DAT_04cb5878);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c23e = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar5 = *(long *)(lVar4 + 0xa8);
  if (lVar5 == 0) {
LAB_0239df08:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar2 = *(int *)(lVar5 + 0x20);
  System_Collections_Generic_HashSet_object___Remove_37e5c2c
            (lVar5,uVar7,*(undefined8 *)PTR_DAT_04cb5870);
  uVar7 = *(undefined8 *)(lVar4 + 0x38);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if ((*(long *)(lVar4 + 0xa8) == 0) || (*(long *)(lVar4 + 0x38) == 0)) goto LAB_0239df08;
    *(bool *)(*(long *)(lVar4 + 0x38) + 0x40) = 0 < *(int *)(*(long *)(lVar4 + 0xa8) + 0x20);
  }
  if (iVar2 < 1) {
    if (*(long *)(lVar4 + 0xa8) == 0) goto LAB_0239df08;
    if (0 < *(int *)(*(long *)(lVar4 + 0xa8) + 0x20)) {
      lVar4 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar4);
      if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caba90);
      }
      puVar3 = PTR_DAT_04caba90;
      if ((bRam0000000004f9bd97 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caba90,0);
        bRam0000000004f9bd97 = 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = Dino_BusSand_App_Meta_JourneyTracking__Recording_221b330(lVar4);
      if ((uVar6 & 1) != 0) {
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = *(undefined8 *)(lVar4 + 0x78);
        lVar4 = **(long **)(lVar5 + 0xb8);
        dVar8 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar5 = -0x8000000000000000;
        if (dVar8 * _UNK_00e6a6f0 != INFINITY) {
          lVar5 = (long)(dVar8 * _UNK_00e6a6f0);
        }
        Dino_BusSand_App_Meta_Journey_LevelJourney__Flow_229a104(0,lVar4,uVar7,lVar5,0,0,0,0);
      }
      return;
    }
  }
  return;
}

