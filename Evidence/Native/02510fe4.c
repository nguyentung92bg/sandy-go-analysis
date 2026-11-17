/* IL2CPP: Dino.BusSand.Core.LevelTweaks$$Apply
Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelTweaks__Apply (Dino_BusSand_Core_LevelData_o* level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelTweaks$$Apply
   Dino_BusSand_Core_LevelData_o* Dino_BusSand_Core_LevelTweaks__Apply
   (Dino_BusSand_Core_LevelData_o* level, const MethodInfo* method); */

long Dino_BusSand_Core_LevelTweaks__Apply_2410fe4(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined4 uStack_64;
  
  if ((bRam0000000004f9cb4a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cab9f8);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cb2b70);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cb57a8);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cbd300);
    FUN_02132f7c(PTR_DAT_04cae230);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cbe568);
    FUN_02132f7c(PTR_DAT_04cbe570);
    bRam0000000004f9cb4a = 1;
  }
  uStack_64 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_88 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    return param_1;
  }
  if ((int)*(uint *)(param_1 + 0x10) < 0x19) {
    return param_1;
  }
  if (*(uint *)(param_1 + 0x10) % 3 != 1) {
    return param_1;
  }
  uVar11 = Dino_BusSand_Core_LevelTweaks__DeclaresMechanics_2410db0(param_1);
  if ((uVar11 & 1) != 0) {
    return param_1;
  }
  lVar13 = *(long *)(param_1 + 0x30);
  if (lVar13 != 0) {
    uVar10 = *(undefined4 *)(lVar13 + 0x10);
    uVar7 = *(undefined4 *)(lVar13 + 0x14);
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbe568);
    Dino_BusSand_Core_TruckGrid___ctor_2421d08(lVar13,uVar10,uVar7,0);
    puVar4 = PTR_DAT_04cbe570;
    puVar6 = PTR_DAT_04cbd300;
    lVar14 = *(long *)(param_1 + 0x30);
    if (lVar14 != 0) {
      iVar8 = 0;
      do {
        lVar14 = *(long *)(lVar14 + 0x18);
        if (lVar14 == 0) break;
        if (*(int *)(lVar14 + 0x18) <= iVar8) {
          lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
          System_Collections_Generic_List_int____ctor_3a2b7dc
                    (lVar14,*(undefined8 *)PTR_DAT_04cad6e8);
          if (lVar13 != 0) {
            uStack_88 = Dino_BusSand_Core_TruckGrid__get_Trucks_241c3d0(lVar13,0);
            Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
                      (&uStack_a0,&uStack_88,*(undefined8 *)PTR_DAT_04cab9f8);
            puVar5 = PTR_DAT_04cab9e8;
            puVar4 = PTR_DAT_04caa160;
            puStack_78 = puStack_98;
            uStack_80 = uStack_a0;
            lStack_70 = lStack_90;
            uStack_a0 = 0;
            puStack_98 = &uStack_80;
            goto LAB_02511290;
          }
          break;
        }
        lVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar14,iVar8,*(undefined8 *)puVar6);
        if (lVar14 == 0) break;
        fVar17 = *(float *)(lVar14 + 0x10);
        fVar18 = *(float *)(lVar14 + 0x14);
        uVar10 = *(undefined4 *)(lVar14 + 0x18);
        uVar7 = Dino_BusSand_Core_BusFootprint__Parse_241148c(*(undefined8 *)(lVar14 + 0x20));
        uVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        Dino_BusSand_Core_Truck___ctor_2421f18
                  ((double)fVar17,(double)fVar18,uVar12,iVar8,uVar10,uVar7,0);
        if (lVar13 == 0) break;
        Dino_BusSand_Core_TruckGrid__Add_2421f70(lVar13,uVar12,0);
        lVar14 = *(long *)(param_1 + 0x30);
        iVar8 = iVar8 + 1;
      } while (lVar14 != 0);
    }
  }
  goto LAB_02511214;
LAB_02511290:
  uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                     (&uStack_80,*(undefined8 *)puVar5);
  lVar16 = lStack_70;
  if ((uVar11 & 1) != 0) {
    uVar11 = Dino_BusSand_Core_TruckGrid__CanEscape_2423be4(lVar13,lStack_70,0);
    if ((uVar11 & 1) == 0) {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (lVar14 != 0) {
        lVar15 = *(long *)(lVar14 + 0x10);
        uVar10 = *(undefined4 *)(lVar16 + 0x10);
        lVar16 = *(long *)puVar4;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar9 = *(uint *)(lVar14 + 0x18);
          if (uVar9 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar9 + 1;
            *(undefined4 *)(lVar15 + (long)(int)uVar9 * 4 + 0x20) = uVar10;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_3a2c06c
                      (lVar14,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_02511290;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    goto LAB_02511290;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_80,*(undefined8 *)PTR_DAT_04cab9e0);
  Dino_BusSand_Core_SandRandom___ctor_24170bc(&uStack_64,*(undefined4 *)(param_1 + 0x14),3,0);
  if (lVar14 != 0) {
    iVar8 = *(int *)(lVar14 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar8 = System_Math__Max_4830fc8(2,iVar8 / 5,0);
    puVar5 = PTR_DAT_04cb2b70;
    puVar4 = PTR_DAT_04cae230;
    if (0 < iVar8) {
      do {
        if (*(int *)(lVar14 + 0x18) < 1) {
          return param_1;
        }
        uVar9 = Dino_BusSand_Core_SandRandom__NextUInt_24170e4(&uStack_64,0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_02511214;
        uVar1 = *(uint *)(lVar14 + 0x18);
        lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar9 / uVar1;
        }
        iVar2 = uVar9 - uVar3 * uVar1;
        uVar10 = System_Collections_Generic_List_int___get_Item_3a2bd74
                           (lVar14,iVar2,*(undefined8 *)puVar4);
        if ((lVar13 == 0) ||
           (lVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                               (lVar13,uVar10,*(undefined8 *)puVar6), lVar13 == 0))
        goto LAB_02511214;
        uVar12 = *(undefined8 *)puVar5;
        *(undefined1 *)(lVar13 + 0x30) = 1;
        System_Collections_Generic_List_int___RemoveAt_3a2d7c4(lVar14,iVar2,uVar12);
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    return param_1;
  }
LAB_02511214:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

