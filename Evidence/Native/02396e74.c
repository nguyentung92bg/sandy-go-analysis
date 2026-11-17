/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder$$DecodeUi
Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStream_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder__DecodeUi (System_String_o* uj, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder$$DecodeUi
   Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStream_o*
   Dino_BusSand_App_Meta_Journey_JourneyDecoder__DecodeUi (System_String_o* uj, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_Journey_JourneyDecoder__DecodeUi_2296e74(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  
  puVar2 = PTR_DAT_04cb5590;
  if ((bRam0000000004f9c203 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5598);
    FUN_02132f7c(PTR_DAT_04cb55a0);
    FUN_02132f7c(PTR_DAT_04cab740);
    FUN_02132f7c(PTR_DAT_04cb55a8);
    FUN_02132f7c(PTR_DAT_04cab748);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb5538);
    FUN_02132f7c(PTR_DAT_04cb55b0);
    FUN_02132f7c(PTR_DAT_04cb5590);
    FUN_02132f7c(PTR_DAT_04cb55b8);
    FUN_02132f7c(PTR_DAT_04caa3a0);
    FUN_02132f7c(PTR_DAT_04cb55c0);
    FUN_02132f7c(PTR_DAT_04cb55c8);
    FUN_02132f7c(PTR_DAT_04cb55d0);
    bRam0000000004f9c203 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStream___ctor_22974fc();
  lVar7 = Dino_BusSand_App_Meta_Journey_Base64Url__Decode_2295dec(param_1);
  puVar3 = PTR_DAT_04cab748;
  puVar2 = PTR_DAT_04cab740;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5538);
  System_Object___ctor_4870e5c(lVar8,0);
  plVar16 = (long *)(lVar8 + 0x10);
  *plVar16 = lVar7;
  thunk_FUN_02134474(plVar16,lVar7);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar9,*(undefined8 *)puVar2);
  iVar4 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04(lVar8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(int *)(lVar6 + 0x10) = iVar4;
  if (iVar4 != 0x21) {
    uVar9 = System_Int32__ToString_482d7e4((int *)(lVar6 + 0x10),*(undefined8 *)PTR_DAT_04caa3a0,0);
    uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb55c0,uVar9,0);
    *(undefined8 *)(lVar6 + 0x30) = uVar9;
    thunk_FUN_02134474();
    return lVar6;
  }
  uVar5 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04(lVar8);
  *(undefined4 *)(lVar6 + 0x14) = uVar5;
  uVar10 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar8);
  *(undefined8 *)(lVar6 + 0x18) = uVar10;
  uVar5 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar8);
  lVar7 = *plVar16;
  *(undefined4 *)(lVar6 + 0x20) = uVar5;
  puVar3 = PTR_DAT_04cb55a0;
  puVar2 = PTR_DAT_04caa200;
  if (lVar7 != 0) {
    lVar17 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= *(int *)(lVar8 + 0x18)) {
        return lVar6;
      }
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb55b0);
      Dino_BusSand_App_Meta_Journey_JourneyDecoder_UiStep___ctor_2297584();
      if (*(long *)(lVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(*(long *)(lVar6 + 0x28) + 0x18);
      lVar11 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar8);
      lVar17 = lVar17 + lVar11 * 100;
      *(long *)(lVar7 + 0x20) = lVar17;
      uVar12 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar8);
      iVar4 = *(int *)(*(long *)puVar2 + 0xe4);
      *(uint *)(lVar7 + 0x14) = (uint)uVar12 & 7;
      if (iVar4 == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = System_Math__Min_4831180(0x7fffffff,uVar12 >> 3,0);
      iVar4 = (int)uVar10;
      *(int *)(lVar7 + 0x18) = iVar4;
      if (*(uint *)(lVar7 + 0x14) < 4) {
        uVar10 = Dino_BusSand_App_Meta_Journey_JourneyDecoder__Name_22975e8(lVar8,uVar10,uVar9);
        *(undefined8 *)(lVar7 + 0x28) = uVar10;
        thunk_FUN_02134474();
      }
      else {
        if (*(uint *)(lVar7 + 0x14) != 4) {
          uVar9 = System_Int32__ToString_482d750((uint *)(lVar7 + 0x14),0);
          uVar10 = System_Int32__ToString_482d750(lVar7 + 0x10,0);
          uVar9 = System_String__Concat_46d30e8
                            (*(undefined8 *)PTR_DAT_04cb55c8,uVar9,*(undefined8 *)PTR_DAT_04cb55d0,
                             uVar10,0);
          *(undefined8 *)(lVar6 + 0x30) = uVar9;
          thunk_FUN_02134474();
          return lVar6;
        }
        if (iVar4 < 4) {
          if (1 < iVar4 - 2U) {
            if (iVar4 == 0) {
              lVar11 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb5598,2);
              uVar10 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar8);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              *(undefined8 *)(lVar11 + 0x20) = uVar10;
              uVar10 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar8);
              if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              *(undefined8 *)(lVar11 + 0x28) = uVar10;
              *(long *)(lVar7 + 0x30) = lVar11;
              thunk_FUN_02134474((long *)(lVar7 + 0x30),lVar11);
            }
            else {
              if (iVar4 != 1) goto LAB_023972fc;
              lVar11 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb5598);
              uVar10 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar8);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              *(undefined8 *)(lVar11 + 0x20) = uVar10;
              *(long *)(lVar7 + 0x30) = lVar11;
              thunk_FUN_02134474((long *)(lVar7 + 0x30),lVar11);
            }
          }
        }
        else {
          if (2 < iVar4 - 4U) {
LAB_023972fc:
            uVar9 = System_Int32__ToString_482d750(lVar7 + 0x18,0);
            uVar10 = System_Int32__ToString_482d750(lVar7 + 0x10,0);
            uVar9 = System_String__Concat_46d30e8
                              (*(undefined8 *)PTR_DAT_04cb55b8,uVar9,*(undefined8 *)PTR_DAT_04cb55d0
                               ,uVar10,0);
            *(undefined8 *)(lVar6 + 0x30) = uVar9;
            thunk_FUN_02134474();
            return lVar6;
          }
          uVar5 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar8);
          uVar10 = Dino_BusSand_App_Meta_Journey_JourneyDecoder__Name_22975e8(lVar8,uVar5,uVar9);
          *(undefined8 *)(lVar7 + 0x28) = uVar10;
          thunk_FUN_02134474();
        }
      }
      lVar11 = *(long *)(lVar6 + 0x28);
      if (lVar11 == 0) {
LAB_02397354:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *(long *)(lVar11 + 0x10);
      lVar15 = *(long *)puVar3;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_02397354;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *plVar14 = lVar7;
        thunk_FUN_02134474(plVar14,lVar7);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar11,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = *plVar16;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

