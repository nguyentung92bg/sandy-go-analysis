/* IL2CPP: Dino.BusSand.Core.Road$$Enqueue
void Dino_BusSand_Core_Road__Enqueue (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* bus, int64_t tick, int32_t inboundTicks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$Enqueue
   void Dino_BusSand_Core_Road__Enqueue (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* bus, int64_t tick, int32_t inboundTicks, const MethodInfo* method);
    */

void Dino_BusSand_Core_Road__Enqueue_2412aec
               (long param_1,long param_2,long param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x30;
  
  if ((bRam0000000004f9cb5d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe618);
    FUN_02132f7c(PTR_DAT_04cbe620);
    FUN_02132f7c(PTR_DAT_04cbe628);
    bRam0000000004f9cb5d = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    uVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                      (*(long *)(param_1 + 0x48),*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)PTR_DAT_04cbe620);
    if ((uVar3 & 1) != 0) {
      FUN_01e7b2d8(param_2);
      uVar5 = System_Int32__ToString_482d750(param_2 + 0x10,0);
      uVar6 = thunk_FUN_021985a8(PTR_DAT_04cbe630);
      uVar5 = System_String__Concat_46c82e0(uVar6,uVar5,0);
      thunk_FUN_021985a8(PTR_DAT_04caa348);
      uVar6 = thunk_FUN_0216e89c();
      System_InvalidOperationException___ctor_482ff30(uVar6,uVar5,0);
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cbe638);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,uVar5);
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
    if (param_4 < 1) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_02512bf0;
      param_4 = *(int *)(*(long *)(param_1 + 0x10) + 0x28);
    }
    iVar1 = *(int *)(param_1 + 0x98);
    lVar4 = *(long *)(param_1 + 0x48);
    *(long *)(param_2 + 0x30) = param_3 + param_4;
    *(int *)(param_1 + 0x98) = iVar1 + 1;
    *(int *)(param_2 + 0x38) = iVar1;
    if (lVar4 != 0) {
      System_Collections_Generic_Dictionary_int__object___Add_343732c
                (lVar4,*(undefined4 *)(param_2 + 0x10),param_2,*(undefined8 *)PTR_DAT_04cbe618);
      lVar4 = *(long *)(param_1 + 0x50);
      uVar2 = Dino_BusSand_Core_Road__IndexOf_2412848(param_1,*(undefined4 *)(param_2 + 0x10));
      if (lVar4 != 0) {
        uVar2 = ~uVar2;
        lVar9 = *(long *)PTR_DAT_04cbe628;
        uVar10 = *(uint *)(lVar4 + 0x18);
        if (uVar10 < uVar2) {
          System_ThrowHelper__ThrowArgumentOutOfRangeException_485066c(0xd,0x1b,0);
          uVar10 = *(uint *)(lVar4 + 0x18);
        }
        lVar7 = *(long *)(lVar4 + 0x10);
        if (lVar7 != 0) {
          if (uVar10 == *(uint *)(lVar7 + 0x18)) {
            System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                      (lVar4,uVar10 + 1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x78));
            uVar10 = *(uint *)(lVar4 + 0x18);
            lVar7 = *(long *)(lVar4 + 0x10);
          }
          if (uVar10 - uVar2 != 0 && (int)uVar2 <= (int)uVar10) {
            System_Array__Copy_4852078
                      (lVar7,uVar2,lVar7,uVar2 + 1,uVar10 - uVar2,0,param_7,param_8,unaff_x30);
            lVar7 = *(long *)(lVar4 + 0x10);
          }
          if (lVar7 != 0) {
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
              *plVar8 = param_2;
              thunk_FUN_02134474(plVar8,param_2);
              *(ulong *)(lVar4 + 0x18) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) + 1,
                            (int)*(undefined8 *)(lVar4 + 0x18) + 1);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_02512bf0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

