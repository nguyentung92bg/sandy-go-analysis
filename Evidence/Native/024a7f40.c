/* IL2CPP: Dino.BusSand.View.GameView$$OnShuffled
void Dino_BusSand_View_GameView__OnShuffled (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnShuffled
   void Dino_BusSand_View_GameView__OnShuffled (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__OnShuffled_23a7f40
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_98;
  
  puVar2 = PTR_DAT_04cbc5e8;
  puVar3 = PTR_DAT_04cbc5e0;
  if ((bRam0000000004f9c93a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc448);
    FUN_02132f7c(PTR_DAT_04cbc5f0);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cbc5f8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cbc600);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04cbc608);
    FUN_02132f7c(PTR_DAT_04cbc610);
    FUN_02132f7c(PTR_DAT_04cbc5e8);
    FUN_02132f7c(PTR_DAT_04cbc618);
    FUN_02132f7c(PTR_DAT_04cbc5e0);
    FUN_02132f7c(PTR_DAT_04cbc620);
    bRam0000000004f9c93a = 1;
  }
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_b0 = 0;
  uStack_98 = 0;
  lStack_c8 = 0;
  puStack_e8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_ValueTuple_object__byte_____ctor_39b8fa8
            (lVar11,*(undefined8 *)puVar2);
  if (cRam0000000004f9b65d == '\0') {
    FUN_02132f7c(PTR_DAT_04caa208);
    cRam0000000004f9b65d = '\x01';
  }
  puVar10 = PTR_DAT_04cbc620;
  puVar9 = PTR_DAT_04cbc610;
  puVar8 = PTR_DAT_04cbc608;
  puVar7 = PTR_DAT_04cbc5f8;
  puVar6 = PTR_DAT_04cbc4b8;
  puVar5 = PTR_DAT_04cbc448;
  puVar4 = PTR_DAT_04cab9f8;
  puVar2 = PTR_DAT_04cab9e8;
  puVar3 = PTR_DAT_04cab9e0;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (lVar12 = *(long *)(*(long *)(param_4 + 0x20) + 0x28), lVar12 != 0)) {
    fVar21 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar23 = (*(float **)(*(long *)PTR_DAT_04caa208 + 0xb8))[2];
    uStack_98 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(lVar12,0);
    Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
              (&uStack_120,&uStack_98,*(undefined8 *)puVar4);
    lStack_b0 = lStack_110;
    puStack_b8 = puStack_118;
    uStack_c0 = uStack_120;
    uStack_120 = 0;
    puStack_118 = &uStack_c0;
    while (uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                              (&uStack_c0,*(undefined8 *)puVar2), lVar12 = lStack_b0,
          (uVar13 & 1) != 0) {
      if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(param_4 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar13 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                         (*(long *)(param_4 + 0xe0),*(undefined4 *)(lStack_b0 + 0x10),&lStack_c8,
                          *(undefined8 *)puVar6);
      if ((uVar13 & 1) != 0) {
        if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = *(long *)(*(long *)(param_4 + 0x20) + 0x50);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar15 = System_Collections_Generic_Dictionary_int__TruckPayload___get_Item_3444f80
                           (lVar14,*(undefined4 *)(lVar12 + 0x10),*(undefined8 *)puVar5);
        if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if ((uint)*(byte *)(lStack_c8 + 0x28) != ((uint)uVar15 & 0xff)) {
          uStack_100 = 0;
          uStack_f8 = 0;
          System_ValueTuple_object__byte____ctor_30ec5f0
                    (&uStack_100,lStack_c8,uVar15,*(undefined8 *)puVar10);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar14 = *(long *)puVar8;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            puVar16 = (undefined8 *)(lVar12 + 0x20);
            *puVar16 = uStack_100;
            *(undefined8 *)(lVar12 + 0x28) = uStack_f8;
            thunk_FUN_02134474(puVar16,0);
          }
          else {
            System_Collections_Generic_List_ValueTuple_object__byte____AddWithResize_39b9854
                      (lVar11,uStack_100,uStack_f8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar12 = UnityEngine_Component__get_transform_43bcd18(lStack_c8,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          fVar17 = (float)UnityEngine_Transform__get_position_43d0e48(lVar12,0);
          fVar21 = fVar21 + fVar17;
          fVar23 = fVar23 + param_3;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_c0,*(undefined8 *)puVar3);
    puVar3 = PTR_DAT_04cbc5f0;
    if (lVar11 != 0) {
      if (0 < *(int *)(lVar11 + 0x18)) {
        fVar17 = (float)*(int *)(lVar11 + 0x18);
        fVar21 = fVar21 / fVar17;
        fVar23 = fVar23 / fVar17;
        System_Collections_Generic_List_ValueTuple_object__byte____GetEnumerator_39ba294
                  (&uStack_120,lVar11,*(undefined8 *)puVar9);
        puVar2 = PTR_DAT_04caa200;
        puStack_e8 = puStack_118;
        uStack_f0 = uStack_120;
        uStack_d8 = uStack_108;
        lStack_e0 = lStack_110;
        uStack_120 = 0;
        fVar17 = _UNK_00e20a7c;
        puStack_118 = &uStack_f0;
        while (uVar13 = System_Collections_Generic_List_Enumerator_ValueTuple_object__byte____MoveNext_35bbe3c
                                  (&uStack_f0,*(undefined8 *)puVar7), (uVar13 & 1) != 0) {
          if (lStack_e0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar12 = UnityEngine_Component__get_transform_43bcd18(lStack_e0,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          fVar18 = (float)UnityEngine_Transform__get_position_43d0e48(lVar12,0);
          fVar22 = param_3;
          if (cRam0000000004f9c959 == '\0') {
            FUN_02132f7c(puVar2);
            cRam0000000004f9c959 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar18 = SQRT((fVar18 - fVar21) * (fVar18 - fVar21) +
                        (param_3 - fVar23) * (param_3 - fVar23));
          param_3 = fVar22;
          if (fVar17 <= fVar18) {
            fVar17 = fVar18;
          }
        }
        System_Collections_Generic_List_Enumerator_ValueTuple_object__byte____Dispose_35bbe38
                  (&uStack_f0,*(undefined8 *)puVar3);
        System_Collections_Generic_List_ValueTuple_object__byte____GetEnumerator_39ba294
                  (&uStack_120,lVar11,*(undefined8 *)puVar9);
        uStack_f0 = uStack_120;
        fVar22 = _UNK_00e206e4;
        uStack_120 = 0;
        puStack_e8 = puStack_118;
        uStack_d8 = uStack_108;
        lStack_e0 = lStack_110;
        fVar18 = -1.0;
        puStack_118 = &uStack_f0;
        while (uVar13 = System_Collections_Generic_List_Enumerator_ValueTuple_object__byte____MoveNext_35bbe3c
                                  (&uStack_f0,*(undefined8 *)puVar7), lVar12 = lStack_e0,
              (uVar13 & 1) != 0) {
          if (lStack_e0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar13 = uStack_d8 & 0xff;
          lVar14 = UnityEngine_Component__get_transform_43bcd18(lStack_e0,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          fVar19 = (float)UnityEngine_Transform__get_position_43d0e48(lVar14,0);
          fVar20 = param_3;
          if (cRam0000000004f9c959 == '\0') {
            FUN_02132f7c(puVar2);
            cRam0000000004f9c959 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar19 = (SQRT((fVar19 - fVar21) * (fVar19 - fVar21) +
                         (param_3 - fVar23) * (param_3 - fVar23)) * fVar22) / fVar17;
          uVar15 = Dino_BusSand_View_GameView__ShuffleBounce_23a9248(fVar19,param_4,lVar12,uVar13);
          UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_4,uVar15,0);
          param_3 = fVar20;
          if (fVar18 <= fVar19) {
            fVar18 = fVar19;
          }
        }
        System_Collections_Generic_List_Enumerator_ValueTuple_object__byte____Dispose_35bbe38
                  (&uStack_f0,*(undefined8 *)puVar3);
        System_Collections_Generic_List_ValueTuple_object__byte____GetEnumerator_39ba294
                  (&uStack_120,lVar11,*(undefined8 *)puVar9);
        uStack_f0 = uStack_120;
        fVar22 = 0.0;
        uStack_120 = 0;
        puStack_e8 = puStack_118;
        uStack_d8 = uStack_108;
        lStack_e0 = lStack_110;
        lVar12 = lStack_110;
        puStack_118 = &uStack_f0;
        while (uVar13 = System_Collections_Generic_List_Enumerator_ValueTuple_object__byte____MoveNext_35bbe3c
                                  (&uStack_f0,*(undefined8 *)puVar7), (uVar13 & 1) != 0) {
          if (lStack_e0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lStack_e0,0);
          fVar22 = fVar22 + (float)lVar12;
        }
        System_Collections_Generic_List_Enumerator_ValueTuple_object__byte____Dispose_35bbe38
                  (&uStack_f0,*(undefined8 *)puVar3);
        if (*(long *)(param_4 + 0x30) == 0) {
          fVar19 = 1.25;
          fVar20 = _UNK_00e2043c;
        }
        else {
          fVar20 = *(float *)(*(long *)(param_4 + 0x30) + 0x60);
          fVar19 = fVar20 * 2.5;
          fVar20 = fVar20 * _UNK_00e201f4;
        }
        if (*(long *)(param_4 + 0xb8) == 0) goto LAB_024a8630;
        Dino_BusSand_View_Fx__GroundRing_2398c44
                  (fVar21,fVar22 / (float)*(int *)(lVar11 + 0x18) + fVar20,fVar23,0x3f800000,
                   0x3f800000,0x3f800000,_UNK_00e200f8,fVar17 * _UNK_00e20184 + fVar19);
        if (0.0 <= fVar18) {
          fVar23 = *(float *)(param_4 + 0x220);
          fVar18 = fVar18 + _UNK_00e208e0;
          fVar21 = (float)UnityEngine_Time__get_time_43cd540(0);
          fVar18 = fVar18 + fVar21;
          if (fVar23 <= fVar18) {
            fVar23 = fVar18;
          }
          *(float *)(param_4 + 0x220) = fVar23;
        }
      }
      puVar3 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar3;
      }
      if (**(long **)(lVar11 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__BoosterUsed_2383cec(0,**(long **)(lVar11 + 0xb8),1,0);
      }
      if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Haptics__Play_2388ed8(2);
      Dino_BusSand_View_GameView__RefreshArrows_239e0ac(param_4);
      return;
    }
  }
LAB_024a8630:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

