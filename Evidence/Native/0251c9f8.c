/* IL2CPP: Dino.BusSand.Core.TruckGrid$$ChainOf
System_Collections_Generic_List_Truck__o* Dino_BusSand_Core_TruckGrid__ChainOf (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.TruckGrid$$ChainOf
   System_Collections_Generic_List_Truck__o* Dino_BusSand_Core_TruckGrid__ChainOf
   (Dino_BusSand_Core_TruckGrid_o* __this, Dino_BusSand_Core_Truck_o* t, const MethodInfo* method);
    */

long Dino_BusSand_Core_TruckGrid__ChainOf_241c9f8(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar5 = PTR_DAT_04cbe9d8;
  puVar4 = PTR_DAT_04cbe9d0;
  puVar3 = PTR_DAT_04cbe9c8;
  if ((bRam0000000004f9cbe5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc088);
    FUN_02132f7c(PTR_DAT_04cab9e0);
    FUN_02132f7c(PTR_DAT_04cab9e8);
    FUN_02132f7c(PTR_DAT_04cab9f0);
    FUN_02132f7c(PTR_DAT_04cbe9e0);
    FUN_02132f7c(PTR_DAT_04cbc4c0);
    FUN_02132f7c(PTR_DAT_04cbc0c0);
    FUN_02132f7c(PTR_DAT_04cbe9d8);
    FUN_02132f7c(PTR_DAT_04cbe9d0);
    FUN_02132f7c(PTR_DAT_04cbe9e8);
    FUN_02132f7c(PTR_DAT_04cbe9c8);
    bRam0000000004f9cbe5 = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Object___ctor_4870e5c(lVar6,0);
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar7,*(undefined8 *)puVar5);
  if (param_2 == 0) {
    return lVar7;
  }
  if (*(int *)(param_2 + 0x40) < 1) {
    if (lVar7 != 0) {
      lVar6 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)PTR_DAT_04cbe9e0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          plVar10 = (long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
          *plVar10 = param_2;
          thunk_FUN_02134474(plVar10,param_2);
          return lVar7;
        }
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar7,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
        ;
        return lVar7;
      }
    }
  }
  else if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_04cbc4c0);
    puVar4 = PTR_DAT_04cbe9e0;
    puVar3 = PTR_DAT_04cab9e8;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
LAB_0251cb54:
    uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_60,*(undefined8 *)puVar3);
    if ((uVar8 & 1) != 0) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(lStack_50 + 0x40) == *(int *)(param_2 + 0x40)) {
        if (lVar7 != 0) {
          lVar11 = *(long *)(lVar7 + 0x10);
          lVar12 = *(long *)puVar4;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lStack_50;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar7,lStack_50,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0251cb54;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      goto LAB_0251cb54;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cab9e0);
    if (lVar6 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Core_BusGeometry__Heading_242bec8(uVar1,lVar6 + 0x10,lVar6 + 0x18);
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc088);
      System_Comparison_object____ctor_3326afc(uVar9,lVar6,*(undefined8 *)PTR_DAT_04cbe9e8,0);
      if (lVar7 != 0) {
        System_Collections_Generic_List_object___Sort_3a83690
                  (lVar7,uVar9,*(undefined8 *)PTR_DAT_04cbc0c0);
        return lVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

