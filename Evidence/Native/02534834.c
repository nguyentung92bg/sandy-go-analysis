/* IL2CPP: Dino.BusSand.Sdk.GooglePlayTangle$$Data
System_Byte_array* Dino_BusSand_Sdk_GooglePlayTangle__Data (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.GooglePlayTangle$$Data
   System_Byte_array* Dino_BusSand_Sdk_GooglePlayTangle__Data (const MethodInfo* method); */

void Dino_BusSand_Sdk_GooglePlayTangle__Data_2434834(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  
  puVar5 = PTR_DAT_04cbf1e0;
  if ((bRam0000000004f9cc3b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf1e0);
    bRam0000000004f9cc3b = 1;
  }
  lVar7 = *(long *)puVar5;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar5;
  }
  puVar5 = PTR_DAT_04ce5438;
  lVar11 = **(long **)(lVar7 + 0xb8);
  lVar7 = (*(long **)(lVar7 + 0xb8))[1];
  if ((bRam0000000004fa31dd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0,lVar7,0xbc,0);
    FUN_02132f7c(PTR_DAT_04ce5440);
    FUN_02132f7c(PTR_DAT_04ce5448);
    FUN_02132f7c(PTR_DAT_04ce5450);
    FUN_02132f7c(PTR_DAT_04ce5458);
    FUN_02132f7c(PTR_DAT_04ce5460);
    FUN_02132f7c(PTR_DAT_04ce5468);
    FUN_02132f7c(PTR_DAT_04ce5438);
    bRam0000000004fa31dd = 1;
  }
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
  System_Object___ctor_4870e5c(lVar8,0);
  if ((lVar8 != 0) && (*(undefined4 *)(lVar8 + 0x10) = 0xbc, lVar11 != 0)) {
    uVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04caaad0,*(undefined4 *)(lVar11 + 0x18));
    iVar3 = *(int *)(lVar11 + 0x18);
    System_Array__Copy_4854300(lVar11,uVar9,iVar3,0);
    puVar5 = PTR_DAT_04ce5450;
    if (lVar7 != 0) {
      uVar4 = *(int *)(lVar7 + 0x18) - 1;
      if (-1 < (int)uVar4) {
        iVar12 = *(int *)(lVar7 + 0x18) * 0x14;
        uVar14 = (ulong)uVar4;
        do {
          iVar12 = iVar12 + -0x14;
          if (*(uint *)(lVar7 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          iVar2 = *(int *)(lVar7 + 0x20 + uVar14 * 4);
          iVar13 = 0x14;
          if ((iVar3 % 0x14 != 0) && (iVar2 == iVar3 / 0x14)) {
            iVar13 = *(int *)(lVar11 + 0x18) % 0x14;
          }
          uVar10 = System_Linq_Enumerable__Skip_byte__273e76c
                             (uVar9,iVar12,*(undefined8 *)PTR_DAT_04ce5448);
          uVar10 = System_Linq_Enumerable__Take_byte__273ea40(uVar10,iVar13,*(undefined8 *)puVar5);
          uVar10 = System_Linq_Enumerable__ToArray_byte__273f46c
                             (uVar10,*(undefined8 *)PTR_DAT_04ce5458);
          iVar2 = iVar2 * 0x14;
          System_Array__Copy_4852078(uVar9,iVar2,uVar9,iVar12,iVar13,0);
          System_Array__Copy_4852078(uVar10,0,uVar9,iVar2,iVar13,0);
          bVar1 = 0 < (long)uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar1);
      }
      puVar6 = PTR_DAT_04ce5468;
      puVar5 = PTR_DAT_04ce5440;
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ce5460);
      System_Func_byte__byte____ctor_37a18ac(uVar10,lVar8,*(undefined8 *)puVar6,0);
      lVar7 = System_Linq_Enumerable__Select_byte__byte__27370b0(uVar9,uVar10,*(undefined8 *)puVar5)
      ;
      lVar11 = *(long *)PTR_DAT_04ce5458;
      if (*(long *)(lVar11 + 0x38) == 0) {
        FUN_0216b4cc(lVar11);
      }
      if (lVar7 != 0) {
        System_Linq_Buffer_byte____ctor_329fc40
                  (&stack0xffffffffffffffc0,lVar7,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x10));
        System_Linq_Buffer_byte___ToArray_32a0210
                  (&stack0xffffffffffffffd0,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x18));
        return;
      }
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04cb1c18);
      uVar9 = System_Linq_Error__ArgumentNull_3c72bf0(uVar9,0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar9,lVar11);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

