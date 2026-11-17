/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder$$DecodeLevel
Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder__DecodeLevel (System_String_o* jr, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder$$DecodeLevel
   Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream_o*
   Dino_BusSand_App_Meta_Journey_JourneyDecoder__DecodeLevel (System_String_o* jr, const MethodInfo*
   method); */

long Dino_BusSand_App_Meta_Journey_JourneyDecoder__DecodeLevel_22960c4(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  byte bVar22;
  
  puVar1 = PTR_DAT_04cb5500;
  if ((bRam0000000004f9c202 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5508);
    FUN_02132f7c(PTR_DAT_04cb5500);
    FUN_02132f7c(PTR_DAT_04cb2e10);
    FUN_02132f7c(PTR_DAT_04cb5510);
    FUN_02132f7c(PTR_DAT_04cb5518);
    FUN_02132f7c(PTR_DAT_04cb5520);
    FUN_02132f7c(PTR_DAT_04cb5528);
    FUN_02132f7c(PTR_DAT_04cb5530);
    FUN_02132f7c(PTR_DAT_04cb2dc0);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cb5538);
    FUN_02132f7c(PTR_DAT_04cb5540);
    FUN_02132f7c(PTR_DAT_04caa3a0);
    FUN_02132f7c(PTR_DAT_04cb5548);
    FUN_02132f7c(PTR_DAT_04cb5550);
    FUN_02132f7c(PTR_DAT_04cb5558);
    bRam0000000004f9c202 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelStream___ctor_2296b4c();
  lVar6 = Dino_BusSand_App_Meta_Journey_Base64Url__Decode_2295dec(param_1);
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5538);
  System_Object___ctor_4870e5c(lVar7,0);
  plVar17 = (long *)(lVar7 + 0x10);
  *plVar17 = lVar6;
  thunk_FUN_02134474(plVar17,lVar6);
  iVar2 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04(lVar7);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(int *)(lVar5 + 0x10) = iVar2;
  if (1 < iVar2 - 0x11U) {
    uVar11 = System_Int32__ToString_482d7e4((int *)(lVar5 + 0x10),*(undefined8 *)PTR_DAT_04caa3a0,0)
    ;
    uVar11 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb5550,uVar11,0);
    *(undefined8 *)(lVar5 + 0x58) = uVar11;
    thunk_FUN_02134474();
    return lVar5;
  }
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04(lVar7);
  *(undefined4 *)(lVar5 + 0x14) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U32_2296c90(lVar7);
  *(undefined4 *)(lVar5 + 0x18) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x1c) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x24) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x28) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U32_2296c90(lVar7);
  *(undefined4 *)(lVar5 + 0x2c) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x30) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x34) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x38) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x3c) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x40) = uVar3;
  uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
  *(undefined4 *)(lVar5 + 0x44) = uVar3;
  if (*(int *)(lVar5 + 0x10) == 0x12) {
    uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
    *(undefined4 *)(lVar5 + 0x48) = uVar3;
    uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(lVar7);
    *(undefined4 *)(lVar5 + 0x4c) = uVar3;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2dc0);
  System_Collections_Generic_List_long____ctor_3a308ac(lVar6,4,*(undefined8 *)PTR_DAT_04cb5528);
  puVar1 = PTR_DAT_04cb2e10;
  lVar13 = *plVar17;
  if (lVar13 != 0) {
    lVar19 = 0;
    lVar20 = 0;
    bVar21 = 0;
    do {
      if (*(int *)(lVar13 + 0x18) <= *(int *)(lVar7 + 0x18)) {
        return lVar5;
      }
      lVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5508);
      Dino_BusSand_App_Meta_Journey_JourneyDecoder_LevelOp___ctor_2296d68();
      if (*(long *)(lVar5 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(*(long *)(lVar5 + 0x50) + 0x18);
      lVar13 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
      uVar9 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
      lVar10 = *(long *)PTR_DAT_04caa200;
      *(byte *)(lVar8 + 0x30) = (byte)((uint)uVar9 >> 3) & 1;
      *(uint *)(lVar8 + 0x14) = (uint)uVar9 & 7;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = System_Math__Min_4831180(0x7fffffff,uVar9 >> 4,0);
      puVar18 = (uint *)(lVar8 + 0x18);
      *puVar18 = uVar4;
      if (*(char *)(lVar8 + 0x30) == '\0') {
        lVar10 = SUB168(SEXT816(lVar13 * 0x32) * SEXT816(0x5555555555555556),8);
        lVar10 = lVar10 - (lVar10 >> 0x3f);
      }
      else {
        lVar10 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
        lVar10 = lVar10 * 0x32;
      }
      lVar19 = lVar13 + lVar19;
      lVar20 = lVar10 + lVar20;
      *(long *)(lVar8 + 0x20) = lVar19;
      *(long *)(lVar8 + 0x28) = lVar20;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar2 = *(int *)(lVar8 + 0x14);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (iVar2 < 5) {
        if (iVar2 == 0) {
          do {
            uVar9 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
            lVar13 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar1;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar4 = *(uint *)(lVar6 + 0x18);
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar4 + 1;
              *(ulong *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar9 >> 1;
            }
            else {
              System_Collections_Generic_List_long___AddWithResize_3a310c0
                        (lVar6,uVar9 >> 1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          } while ((uVar9 & 1) != 0);
        }
        else if (iVar2 == 2) {
          lVar13 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
          lVar10 = *(long *)(lVar6 + 0x10);
          lVar15 = *(long *)puVar1;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar16 = (long)(int)*(uint *)(lVar6 + 0x18);
          if (*(uint *)(lVar6 + 0x18) < *(uint *)(lVar10 + 0x18)) goto LAB_02396680;
          System_Collections_Generic_List_long___AddWithResize_3a310c0
                    (lVar6,lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
        }
      }
      else if (iVar2 == 5) {
        uVar4 = *puVar18;
        if ((uVar4 & 7) == 0) {
          if ((uVar4 | 7) < 0xf) {
            iVar2 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U32_2296c90(lVar7);
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar15 = *(long *)puVar1;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar16 = (long)(int)*(uint *)(lVar6 + 0x18);
            lVar13 = (long)iVar2;
            if (*(uint *)(lVar6 + 0x18) < *(uint *)(lVar10 + 0x18)) {
LAB_02396680:
              *(int *)(lVar6 + 0x18) = (int)lVar16 + 1;
              *(long *)(lVar10 + lVar16 * 8 + 0x20) = lVar13;
            }
            else {
              System_Collections_Generic_List_long___AddWithResize_3a310c0
                        (lVar6,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
          else if ((uVar4 == 0x10) || (uVar4 == 8)) {
            lVar13 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar15 = *(long *)puVar1;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar16 = (long)(int)*(uint *)(lVar6 + 0x18);
            if (*(uint *)(lVar6 + 0x18) < *(uint *)(lVar10 + 0x18)) goto LAB_02396680;
            System_Collections_Generic_List_long___AddWithResize_3a310c0
                      (lVar6,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      else if (iVar2 == 6) {
        if (7 < *puVar18) {
          uVar11 = System_Int32__ToString_482d750(puVar18,0);
          uVar12 = System_Int32__ToString_482d750(lVar8 + 0x10,0);
          uVar11 = System_String__Concat_46d30e8
                             (*(undefined8 *)PTR_DAT_04cb5540,uVar11,*(undefined8 *)PTR_DAT_04cb5558
                              ,uVar12,0);
          *(undefined8 *)(lVar5 + 0x58) = uVar11;
          thunk_FUN_02134474();
          return lVar5;
        }
        uVar4 = 1 << (ulong)(*puVar18 & 0x1f);
        if ((uVar4 & 0xa3) == 0) {
          if ((uVar4 & 0x4c) == 0) {
            uVar11 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
            lVar13 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar1;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar4 = *(uint *)(lVar6 + 0x18);
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar4 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar11;
            }
            else {
              System_Collections_Generic_List_long___AddWithResize_3a310c0
                        (lVar6,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            uVar11 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
            lVar13 = *(long *)(lVar6 + 0x10);
            lVar10 = *(long *)puVar1;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar4 = *(uint *)(lVar6 + 0x18);
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar4 + 1;
              *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar11;
            }
            else {
              System_Collections_Generic_List_long___AddWithResize_3a310c0
                        (lVar6,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            uVar3 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U32_2296c90(lVar7);
            *(undefined4 *)(lVar8 + 0x40) = uVar3;
          }
          else {
            lVar13 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar15 = *(long *)puVar1;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar16 = (long)(int)*(uint *)(lVar6 + 0x18);
            if (*(uint *)(lVar6 + 0x18) < *(uint *)(lVar10 + 0x18)) goto LAB_02396680;
            System_Collections_Generic_List_long___AddWithResize_3a310c0
                      (lVar6,lVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      else if (iVar2 == 7) {
        iVar2 = 4;
        do {
          uVar11 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Var_2296dd8(lVar7);
          lVar13 = *(long *)(lVar6 + 0x10);
          lVar10 = *(long *)puVar1;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar4 = *(uint *)(lVar6 + 0x18);
          if (uVar4 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar4 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = uVar11;
          }
          else {
            System_Collections_Generic_List_long___AddWithResize_3a310c0
                      (lVar6,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      uVar11 = System_Collections_Generic_List_long___ToArray_3a32b54
                         (lVar6,*(undefined8 *)PTR_DAT_04cb5520);
      *(undefined8 *)(lVar8 + 0x38) = uVar11;
      thunk_FUN_02134474();
      if (*(int *)(lVar8 + 0x14) < 4) {
        bVar22 = 0;
        *(byte *)(lVar8 + 0x44) = bVar21;
      }
      else {
        bVar22 = bVar21;
        if (*(int *)(lVar8 + 0x14) == 6) {
          bVar22 = *puVar18 == 5 | bVar21;
        }
      }
      lVar13 = *(long *)(lVar5 + 0x50);
      if (lVar13 == 0) {
LAB_0239693c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar10 = *(long *)(lVar13 + 0x10);
      lVar15 = *(long *)PTR_DAT_04cb5510;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0239693c;
      uVar4 = *(uint *)(lVar13 + 0x18);
      if (uVar4 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar4 + 1;
        plVar14 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
        *plVar14 = lVar8;
        thunk_FUN_02134474(plVar14,lVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar13,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      lVar13 = *plVar17;
      if (*(int *)(lVar8 + 0x14) == 7) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(int *)(lVar7 + 0x18) < *(int *)(lVar13 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)PTR_DAT_04cb5548;
          thunk_FUN_02134474();
          return lVar5;
        }
      }
      bVar21 = bVar22;
    } while (lVar13 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

