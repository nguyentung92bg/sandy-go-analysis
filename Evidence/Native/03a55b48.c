/* IL2CPP: Dino.BusSand.Core.ListView<__Il2CppFullySharedGenericType>$$get_Item
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Dino_BusSand_Core_ListView___Il2CppFullySharedGenericType___get_Item (Dino_BusSand_Core_ListView_T__o __this, int32_t index, const MethodInfo_3955B48* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ListView<__Il2CppFullySharedGenericType>$$get_Item
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Dino_BusSand_Core_ListView___Il2CppFullySharedGenericType___get_Item
   (Dino_BusSand_Core_ListView_T__o __this, int32_t index, const MethodInfo_3955B48* method); */

void Dino_BusSand_Core_ListView___Il2CppFullySharedGenericType___get_Item_3955b48
               (long *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puStack_70;
  long lStack_68;
  undefined4 uStack_5c;
  long lStack_58;
  
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_4 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470(lVar4);
  }
  uVar6 = (ulong)*(uint *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x20) + 0xfc);
  lVar4 = (long)&puStack_70 - (uVar6 + 0xf & 0x1fffffff0);
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*(long *)(lVar2 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else {
    lVar5 = *(long *)(param_4 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar3 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0216b470(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_4 + 0x20) + 0x135);
      lVar3 = *(long *)(param_4 + 0x20);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0216b470(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
    puStack_70 = &uStack_5c;
    lStack_68 = lVar4;
    uStack_5c = param_2;
    (**(code **)(lVar3 + 0x10))(uVar8,lVar3,lVar7,&puStack_70,lVar4);
    func_0x049b5410(param_3,lVar4,uVar6);
    if (*(long *)(lVar2 + 0x28) == lStack_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

