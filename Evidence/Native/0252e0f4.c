/* IL2CPP: Dino.BusSand.Core.Lift$$.ctor
void Dino_BusSand_Core_Lift___ctor (Dino_BusSand_Core_Lift_o* __this, int32_t id, double cx, double cz, int32_t occupant, Dino_BusSand_Core_LiftPlatform_o* platform, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lift$$.ctor
   void Dino_BusSand_Core_Lift___ctor (Dino_BusSand_Core_Lift_o* __this, int32_t id, double cx,
   double cz, int32_t occupant, Dino_BusSand_Core_LiftPlatform_o* platform, const MethodInfo*
   method); */

void Dino_BusSand_Core_Lift___ctor_242e0f4
               (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,int param_5,
               undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar5 = PTR_DAT_04cbef28;
  puVar4 = PTR_DAT_04cbef20;
  puVar3 = PTR_DAT_04cad6e8;
  puVar2 = PTR_DAT_04caa1c8;
  if ((bRam0000000004f9cbf5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04cbef28);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cbef20);
    bRam0000000004f9cbf5 = 1;
  }
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar6,*(undefined8 *)puVar5);
  *(undefined8 *)(param_3 + 0x30) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_3 + 0x30),uVar6);
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_int____ctor_3a2b7dc(lVar7,*(undefined8 *)puVar3);
  plVar10 = (long *)(param_3 + 0x68);
  *plVar10 = lVar7;
  thunk_FUN_02134474(plVar10,lVar7);
  System_Object___ctor_4870e5c(param_3,0);
  *(undefined8 *)(param_3 + 0x28) = param_6;
  *(undefined4 *)(param_3 + 0x10) = param_4;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_3 + 0x28),param_6);
  if (param_5 < 0) {
    return;
  }
  lVar7 = *plVar10;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *(long *)PTR_DAT_04caa160;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = param_5;
        return;
      }
      uVar1 = *(uint *)(lVar7 + 0x18);
      System_Collections_Generic_List_int___EnsureCapacity_3a2c62c
                (lVar7,uVar1 + 1,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70) +
                                      0x20) + 0xc0) + 0x78));
      lVar8 = *(long *)(lVar7 + 0x10);
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = param_5;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

