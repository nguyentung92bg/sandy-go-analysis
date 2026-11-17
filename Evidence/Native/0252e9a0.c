/* IL2CPP: Dino.BusSand.Core.Lift.<get_Queue>d__18$$MoveNext
bool Dino_BusSand_Core_Lift__get_Queue_d__18__MoveNext (Dino_BusSand_Core_Lift__get_Queue_d__18_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Lift.<get_Queue>d__18$$MoveNext
   bool Dino_BusSand_Core_Lift__get_Queue_d__18__MoveNext
   (Dino_BusSand_Core_Lift__get_Queue_d__18_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Core_Lift__get_Queue_d__18__MoveNext_242e9a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_40;
  long *plStack_38;
  long lStack_28;
  
  lStack_28 = param_1;
  if ((bRam0000000004f9cbfd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbedb0);
    FUN_02132f7c(PTR_DAT_04cbedb8);
    FUN_02132f7c(PTR_DAT_04cbedc0);
    FUN_02132f7c(PTR_DAT_04cbedc8);
    FUN_02132f7c(PTR_DAT_04cbedd0);
    FUN_02132f7c(PTR_DAT_04cbedd8);
    FUN_02132f7c(PTR_DAT_04cbef48);
    bRam0000000004f9cbfd = 1;
  }
  puVar3 = PTR_DAT_04cbedd8;
  puVar2 = PTR_DAT_04cbedb8;
  puVar1 = PTR_DAT_04cbedb0;
  plStack_38 = &lStack_28;
  lStack_40 = 0;
  if (*(int *)(param_1 + 0x10) == 1) goto LAB_0252eb3c;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_b8,lVar4,*(undefined8 *)PTR_DAT_04cbedd0);
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    uStack_70 = uStack_a8;
    *(ulong *)(lStack_28 + 0x38) = uStack_b0;
    *(undefined8 *)(lStack_28 + 0x30) = uStack_b8;
    *(undefined8 *)(lStack_28 + 0x40) = uStack_a8;
    thunk_FUN_02134474(lStack_28 + 0x30,0);
    *(undefined4 *)(lStack_28 + 0x10) = 0xfffffffd;
    while( true ) {
      uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (lStack_28 + 0x30,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) break;
      if (*(long *)(lStack_28 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_List_LiftCar___GetEnumerator_3a3c3ac
                (&uStack_b8,*(long *)(lStack_28 + 0x40),*(undefined8 *)puVar3);
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      uStack_68 = uStack_a0;
      uStack_70 = uStack_a8;
      uStack_58 = uStack_90;
      uStack_60 = uStack_98;
      uStack_50 = uStack_88;
      *(ulong *)(lStack_28 + 0x50) = uStack_b0;
      *(undefined8 *)(lStack_28 + 0x48) = uStack_b8;
      *(undefined8 *)(lStack_28 + 0x60) = uStack_a0;
      *(undefined8 *)(lStack_28 + 0x58) = uStack_a8;
      *(undefined8 *)(lStack_28 + 0x70) = uStack_90;
      *(undefined8 *)(lStack_28 + 0x68) = uStack_98;
      *(undefined8 *)(lStack_28 + 0x78) = uStack_88;
      thunk_FUN_02134474(lStack_28 + 0x48,0);
      param_1 = lStack_28;
LAB_0252eb3c:
      uVar6 = *(undefined8 *)puVar1;
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
      uVar5 = System_Collections_Generic_List_Enumerator_LiftCar___MoveNext_35d2d68
                        (param_1 + 0x48,uVar6);
      if ((uVar5 & 1) != 0) {
        uStack_78 = uStack_78 & 0xffffffff00000000;
        uStack_80 = 0;
        System_ValueTuple_int__Int32Enum__int____ctor_30ff3ac
                  (&uStack_80,*(undefined4 *)(lStack_28 + 0x58),*(undefined4 *)(lStack_28 + 0x5c),
                   *(undefined4 *)(lStack_28 + 0x70),*(undefined8 *)PTR_DAT_04cbef48);
        uVar6 = 1;
        *(undefined8 *)(lStack_28 + 0x14) = uStack_80;
        *(undefined4 *)(lStack_28 + 0x1c) = (undefined4)uStack_78;
        *(undefined4 *)(lStack_28 + 0x10) = 1;
        goto LAB_0252ebd4;
      }
      Dino_BusSand_Core_Lift__get_Queue_d__18____m__Finally2_242ec60();
      *(undefined8 *)(lStack_28 + 0x78) = 0;
      *(undefined8 *)(lStack_28 + 0x50) = 0;
      *(undefined8 *)(lStack_28 + 0x48) = 0;
      *(undefined8 *)(lStack_28 + 0x60) = 0;
      *(undefined8 *)(lStack_28 + 0x58) = 0;
      *(undefined8 *)(lStack_28 + 0x70) = 0;
      *(undefined8 *)(lStack_28 + 0x68) = 0;
    }
    Dino_BusSand_Core_Lift__get_Queue_d__18____m__Finally1_242ecb0();
    uVar6 = 0;
    *(undefined8 *)(lStack_28 + 0x38) = 0;
    *(undefined8 *)(lStack_28 + 0x40) = 0;
    *(undefined8 *)(lStack_28 + 0x30) = 0;
  }
  else {
    uVar6 = 0;
  }
LAB_0252ebd4:
  lVar4 = lStack_40;
  if (lStack_40 == 0) {
    return uVar6;
  }
  FUN_01e7ba18(&plStack_38);
                    /* WARNING: Subroutine does not return */
  FUN_0213321c(lVar4);
}

