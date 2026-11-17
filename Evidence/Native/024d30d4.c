/* IL2CPP: Dino.BusSand.View.MechanicLayer$$<CollectHighlights>g__Car|137_0
void Dino_BusSand_View_MechanicLayer___CollectHighlights_g__Car_137_0 (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Truck_o* t, Dino_BusSand_View_MechanicLayer___c__DisplayClass137_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$<CollectHighlights>g__Car|137_0
   void Dino_BusSand_View_MechanicLayer___CollectHighlights_g__Car_137_0
   (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Truck_o* t,
   Dino_BusSand_View_MechanicLayer___c__DisplayClass137_0_o* , const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer___CollectHighlights_g__Car_137_0_23d30d4
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9ca02 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6c0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca02 = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((param_2 != 0) && (lVar6 = *(long *)(param_1 + 0x30), lVar6 != 0)) {
    lVar6 = (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)(lVar6 + 0x28));
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (lVar6 != 0) {
      lVar8 = *(long *)(param_3 + 8);
      uVar4 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
      if (lVar8 != 0) {
        lVar6 = *(long *)(lVar8 + 0x10);
        lVar7 = *(long *)PTR_DAT_04cad6c0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *puVar5 = uVar4;
          }
          else {
            uVar1 = *(uint *)(lVar8 + 0x18);
            System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                      (lVar8,uVar1 + 1,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) +
                                                      0x70) + 0x20) + 0xc0) + 0x78));
            lVar6 = *(long *)(lVar8 + 0x10);
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *puVar5 = uVar4;
          }
          if (iRam00000000051c1b10 != 0) {
            FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                         ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

