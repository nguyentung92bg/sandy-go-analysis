/* IL2CPP: Dino.BusSand.Core.Lift$$CanEmit
bool Dino_BusSand_Core_Lift__CanEmit (Dino_BusSand_Core_Lift_o* __this, Dino_BusSand_Core_TruckGrid_o* yard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lift$$CanEmit
   bool Dino_BusSand_Core_Lift__CanEmit (Dino_BusSand_Core_Lift_o* __this,
   Dino_BusSand_Core_TruckGrid_o* yard, const MethodInfo* method); */

uint Dino_BusSand_Core_Lift__CanEmit_242e6b0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000004f9cbfc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbeda0);
    FUN_02132f7c(PTR_DAT_04cbedb0);
    FUN_02132f7c(PTR_DAT_04cbedc0);
    FUN_02132f7c(PTR_DAT_04cbedd8);
    FUN_02132f7c(PTR_DAT_04cbef38);
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cbeeb0);
    bRam0000000004f9cbfc = 1;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  uStack_70 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (lVar7 == 0) {
LAB_0252e880:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar7 + 0x18) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_0252e880;
    if (*(int *)(*(long *)(param_1 + 0x68) + 0x18) == 0) {
      lVar7 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar7,0,*(undefined8 *)PTR_DAT_04cbeeb0);
      if (lVar7 == 0) goto LAB_0252e880;
      System_Collections_Generic_List_LiftCar___GetEnumerator_3a3c3ac
                (&uStack_a0,lVar7,*(undefined8 *)PTR_DAT_04cbedd8);
      puVar2 = PTR_DAT_04cbedb0;
      puVar1 = PTR_DAT_04cbc080;
      uStack_e0 = 0;
      puStack_d8 = &uStack_a0;
      do {
        uVar6 = System_Collections_Generic_List_Enumerator_LiftCar___MoveNext_35d2d68
                          (&uStack_a0,*(undefined8 *)puVar2);
        uVar8 = uStack_78;
        uVar5 = uStack_80;
        uVar4 = uStack_88;
        if ((uVar6 & 1) == 0) break;
        uVar3 = uStack_90._4_4_;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Core_BusGeometry__Make_242bfa4
                  (&uStack_110,uVar4,uVar5,uVar8 & 0xffffffff,uVar3,0);
        uStack_a8 = uStack_e8;
        uStack_b0 = uStack_f0;
        uStack_c8 = uStack_108;
        uStack_d0 = uStack_110;
        uStack_b8 = uStack_f8;
        uStack_c0 = uStack_100;
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar8 = Dino_BusSand_Core_TruckGrid__OverlapsAny_242d7ac
                          (param_2,&uStack_d0,*(undefined4 *)(param_1 + 0x10),0);
      } while ((uVar8 & 1) == 0);
      uVar6 = uVar6 ^ 1;
      System_Collections_Generic_List_Enumerator_LiftCar___Dispose_35d2d64
                (&uStack_a0,*(undefined8 *)PTR_DAT_04cbeda0);
      goto LAB_0252e858;
    }
  }
  uVar6 = 0;
LAB_0252e858:
  return uVar6 & 1;
}

