/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$LevelBegin
void Dino_BusSand_App_Meta_JourneyTracking__LevelBegin (int32_t aseq, int32_t level, System_String_o* configId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$LevelBegin
   void Dino_BusSand_App_Meta_JourneyTracking__LevelBegin (int32_t aseq, int32_t level,
   System_String_o* configId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__LevelBegin_2211444
               (int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  double dVar24;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  puVar7 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bd8e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac568);
    bRam0000000004f9bd8e = 1;
  }
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_JourneyTracking__Hook_221b4d0();
  if (**(long **)(*(long *)puVar7 + 0xb8) != 0) {
    Dino_BusSand_App_Meta_Journey_LevelJourney__Close_2299bcc(**(long **)(*(long *)puVar7 + 0xb8),0)
    ;
    puVar16 = (undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
    *puVar16 = 0;
    thunk_FUN_02134474(puVar16,0);
    puVar6 = PTR_DAT_04cac868;
    lVar21 = *(long *)(*(long *)puVar7 + 0xb8);
    lVar17 = *(long *)PTR_DAT_04cac868;
    *(undefined8 *)(lVar21 + 0x24) = _UNK_00e6a140;
    iVar1 = *(int *)(lVar17 + 0xe4);
    *(undefined4 *)(lVar21 + 0x20) = 0;
    *(undefined1 *)(lVar21 + 0x38) = 0;
    *(undefined4 *)(lVar21 + 0x34) = 0xffffffff;
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcf9 == '\0') {
      FUN_02132f7c(PTR_DAT_04cac868);
      cRam0000000004f9bcf9 = '\x01';
    }
    lVar17 = *(long *)puVar6;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar17 = *(long *)puVar6;
    }
    puVar6 = PTR_DAT_04ca9ae8;
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar18 = UnityEngine_Object__op_Inequality_43c8dec(lVar17,0,0);
    if ((uVar18 & 1) == 0) {
      lVar21 = 0;
    }
    else {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar21 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar17,0);
    }
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_JourneyTracking__UiMark_22149d0(0,(long)param_1,(long)param_2,0);
    if (*(int *)(*(long *)PTR_DAT_04cacfd8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    bVar8 = Dino_BusSand_App_Meta_MonetizationSettings__get_JourneyOn_2269014(0);
    if ((bVar8 & lVar21 != 0) != 0) {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar23 = *(undefined8 *)(lVar17 + 0x38);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar18 = UnityEngine_Object__op_Equality_43c6f30(uVar23,0,0);
      if ((uVar18 & 1) == 0) {
        if (*(long *)(lVar17 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0x28);
        if (lVar17 != 0) {
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar10 = Dino_BusSand_App_Meta_JourneyTracking__ConfigHash_221bb50(param_3);
          puVar6 = PTR_DAT_04cac568;
          uVar23 = *(undefined8 *)(lVar17 + 0x1c);
          uVar2 = *(undefined4 *)(lVar17 + 0x18);
          iVar1 = *(int *)(lVar17 + 0x28);
          lVar19 = *(long *)PTR_DAT_04cac568;
          iVar5 = iVar1;
          if (*(int *)(lVar19 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar19 = *(long *)puVar6;
            iVar5 = *(int *)(lVar17 + 0x28);
          }
          puVar6 = PTR_DAT_04caba50;
          uVar3 = *(undefined1 *)(lVar17 + 0x25);
          lVar22 = *(long *)PTR_DAT_04caba50;
          dVar24 = **(double **)(lVar19 + 0xb8);
          if (*(int *)(lVar22 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar22);
            lVar22 = *(long *)puVar6;
          }
          uVar4 = *(undefined1 *)(*(long *)(lVar22 + 0xb8) + 8);
          uVar9 = Dino_BusSand_App_Meta_JourneyTracking__RewardedReady_221bc24();
          uVar11 = Dino_BusSand_App_Meta_JourneyTracking__Count_221bd0c(0x2712);
          uVar12 = Dino_BusSand_App_Meta_JourneyTracking__Count_221bd0c(0x2713);
          uVar13 = Dino_BusSand_App_Meta_JourneyTracking__Count_221bd0c(0x2714);
          uVar14 = Dino_BusSand_App_Meta_JourneyTracking__Count_221bd0c(0x2715);
          uVar15 = Dino_BusSand_App_Meta_JourneyTracking__Count_221bd0c(0x3eb);
          uStack_80 = Dino_BusSand_App_Meta_JourneyTracking__Count_221bd0c(0x2711);
          uStack_ac = (undefined4)uVar23;
          uStack_a8 = (undefined4)((ulong)uVar23 >> 0x20);
          uStack_a0 = CONCAT44((float)dVar24,iVar1);
          uStack_7c = *(undefined8 *)(lVar17 + 0x30);
          uStack_98 = CONCAT44(uVar11,CONCAT22(CONCAT11(uVar4,0 < iVar5),CONCAT11(uVar3,uVar9))) &
                      0xffffffffffffff01;
          uStack_90 = CONCAT44(uVar13,uVar12);
          lVar17 = **(long **)(*(long *)puVar7 + 0xb8);
          uStack_b0 = uVar10;
          uStack_a4 = uVar2;
          uStack_88 = uVar14;
          uStack_84 = uVar15;
          dVar24 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar19 = -0x8000000000000000;
          if (dVar24 * _UNK_00e6a6f0 != INFINITY) {
            lVar19 = (long)(dVar24 * _UNK_00e6a6f0);
          }
          Dino_BusSand_App_Meta_Journey_LevelJourney__Begin_2299a04(lVar17,&uStack_b0,lVar19,0);
          plVar20 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
          *plVar20 = lVar21;
          thunk_FUN_02134474(plVar20,lVar21);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

