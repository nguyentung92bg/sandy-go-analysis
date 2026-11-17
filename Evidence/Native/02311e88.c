/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PushProperties
void Dino_BusSand_App_Meta_GameTracking__PushProperties (bool full, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$PushProperties
   void Dino_BusSand_App_Meta_GameTracking__PushProperties (bool full, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  int aiStack_74 [3];
  undefined4 uStack_68;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bd80 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb2380);
    FUN_02132f7c(PTR_DAT_04cb2388);
    FUN_02132f7c(PTR_DAT_04cb2390);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04caba60);
                    /* try { // try from 02311f48 to 02411f4f has its CatchHandler @ 02311f5c */
    FUN_02132f7c(PTR_DAT_04caa200);
                    /* try { // try from 02311f50 to 02411f63 has its CatchHandler @ 02311d4c */
    FUN_02132f7c(PTR_DAT_04cabaf8);
                    /* catch() { ... } // from try @ 02311e2c with catch @ 02311f5c
                       catch() { ... } // from try @ 02311f48 with catch @ 02311f5c */
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb2398);
    FUN_02132f7c(PTR_DAT_04cb1da0);
    FUN_02132f7c(PTR_DAT_04cb23a0);
    FUN_02132f7c(PTR_DAT_04cb23a8);
    FUN_02132f7c(PTR_DAT_04cb23b0);
    FUN_02132f7c(PTR_DAT_04cb23b8);
    FUN_02132f7c(PTR_DAT_04cb23c0);
    FUN_02132f7c(PTR_DAT_04cb23c8);
    FUN_02132f7c(PTR_DAT_04ca9b60);
    FUN_02132f7c(PTR_DAT_04cb23d0);
    FUN_02132f7c(PTR_DAT_04cb23d8);
    FUN_02132f7c(PTR_DAT_04cb23e0);
    FUN_02132f7c(PTR_DAT_04cb23e8);
    FUN_02132f7c(PTR_DAT_04cb23f0);
    FUN_02132f7c(PTR_DAT_04cb23f8);
    FUN_02132f7c(PTR_DAT_04cb2400);
    FUN_02132f7c(PTR_DAT_04cb2050);
    FUN_02132f7c(PTR_DAT_04cb2408);
    FUN_02132f7c(PTR_DAT_04cb2410);
    FUN_02132f7c(PTR_DAT_04cb2418);
    bRam0000000004f9bd80 = 1;
  }
  uStack_68 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_04cac498;
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar10 != 0) {
    lVar11 = *(long *)PTR_DAT_04cac498;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar3;
    }
    puVar4 = PTR_DAT_04caa200;
    if (*(int *)(*(long *)(lVar11 + 0xb8) + 0x14) < 1) {
      uVar9 = *(undefined4 *)(lVar10 + 0x14);
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = System_Math__Max_4830fc8(1,uVar9,0);
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar11);
        lVar11 = *(long *)puVar3;
      }
      *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x14) = uVar9;
    }
    puVar1 = PTR_DAT_04ca9b50;
    if (*(long *)(lVar10 + 0x110) == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(*(long *)(lVar10 + 0x110) + 0x18);
    }
    lVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b08);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (lVar11,*(undefined8 *)puVar1);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_04ca9ac8;
    aiStack_74[0] = *(int *)(*(long *)(lVar12 + 0xb8) + 0x14);
    uVar13 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),aiStack_74);
    puVar8 = PTR_DAT_04cb2410;
    puVar7 = PTR_DAT_04cb2400;
    puVar6 = PTR_DAT_04cb23e8;
    puVar5 = PTR_DAT_04cb23d0;
    puVar2 = PTR_DAT_04ca9b58;
    if (lVar11 == 0) {
LAB_02312620:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar11,*(undefined8 *)PTR_DAT_04cb2418,uVar13,*(undefined8 *)PTR_DAT_04ca9b58);
    uVar13 = *(undefined8 *)(lVar10 + 0x18);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uStack_80 = System_Math__Max_4830fd4(0,uVar13,0);
    uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&uStack_80);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar11,*(undefined8 *)puVar7,uVar13,*(undefined8 *)puVar2);
    uStack_84 = System_Math__Max_4830fc8(0,*(undefined4 *)(lVar10 + 0x28),0);
    uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_84);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar11,*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar2);
    uVar14 = *(undefined8 *)puVar8;
    uStack_80 = CONCAT44(uStack_80._4_4_,(uint)(0 < iVar15));
    uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_80);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar11,uVar14,uVar13,*(undefined8 *)puVar2);
    aiStack_74[0] = iVar15;
    uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),aiStack_74);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar11,*(undefined8 *)puVar6,uVar13,*(undefined8 *)puVar2);
    uStack_84 = *(undefined4 *)(lVar10 + 0x74);
    uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_84);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar11,*(undefined8 *)PTR_DAT_04cb2398,uVar13,*(undefined8 *)puVar2);
    uStack_88 = *(undefined4 *)(lVar10 + 0x78);
    uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_88);
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar11,*(undefined8 *)PTR_DAT_04cb23a8,uVar13,*(undefined8 *)puVar2);
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    UnityEngine_PlayerPrefs__SetInt_43b5300
              (*(undefined8 *)PTR_DAT_04cb23e0,*(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x14),0);
    if ((param_1 & 1) != 0) {
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)PTR_DAT_04cb23d8,*(undefined8 *)PTR_DAT_04cb2050,
                 *(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_App_Meta_GameTracking__CurrentEvents_221abc4();
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)PTR_DAT_04cb23a0,uVar13,*(undefined8 *)puVar2);
      puVar3 = PTR_DAT_04ca9b60;
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)PTR_DAT_04cb2408,*(undefined8 *)PTR_DAT_04ca9b60,
                 *(undefined8 *)puVar2);
      puVar4 = PTR_DAT_04cb2380;
      uVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2380);
      System_Func_int____ctor_379db7c(uVar13,0,*(undefined8 *)PTR_DAT_04cb2390,0);
      uVar9 = Dino_BusSand_App_Meta_GameTracking__SafeInt_221aed4(uVar13);
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
      uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_80);
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)PTR_DAT_04cb23c8,uVar13,*(undefined8 *)puVar2);
      uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      System_Func_int____ctor_379db7c(uVar13,0,*(undefined8 *)PTR_DAT_04cb2388,0);
      aiStack_74[0] = Dino_BusSand_App_Meta_GameTracking__SafeInt_221aed4(uVar13);
      uVar13 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),aiStack_74);
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)PTR_DAT_04cb23f8,uVar13,*(undefined8 *)puVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02312710 with catch @ 02312494
                       catch(type#1 @ 00000000) { ... } // from try @ 02312820 with catch @ 02312494
                       catch(type#1 @ 00000000) { ... } // from try @ 02312b30 with catch @ 02312494
                        */
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_App_Meta_Profile__get_PlayerId_2274008(0);
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)PTR_DAT_04cb23f0,uVar13,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_App_Meta_JourneyTracking__DeviceTier_221afd4();
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)PTR_DAT_04cb23c0,uVar13,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)PTR_DAT_04cb1868 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar13 = Dino_BusSand_Core_LevelCatalog__get_SetId_240fab0(0);
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)PTR_DAT_04cb23b0,uVar13,*(undefined8 *)puVar2);
      lVar10 = Dino_BusSand_Core_LevelCatalog__get_Rev_2410184(0);
      if (lVar10 == 0) goto LAB_02312620;
      if (*(int *)(lVar10 + 0x10) < 1) {
        lVar10 = *(long *)puVar3;
      }
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (lVar11,*(undefined8 *)PTR_DAT_04cb23b8,lVar10,*(undefined8 *)puVar2);
    }
    puVar3 = PTR_DAT_04cb1d58;
    if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9bcfe == '\0') {
      FUN_02132f7c(PTR_DAT_04cb1d58);
      cRam0000000004f9bcfe = '\x01';
    }
    puVar1 = PTR_DAT_04cb2240;
    puVar4 = PTR_DAT_04cb1da0;
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar3;
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (lVar11,*(undefined8 *)puVar4,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_TrackingPlan__SetProperties_2275fa8(lVar11,0);
  }
  return;
}

