/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$Shuffle<__Il2CppFullySharedGenericType>
void Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* list, System_Random_o* rng, const MethodInfo_26EC22C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$Shuffle<__Il2CppFullySharedGenericType>
   void Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle___Il2CppFullySharedGenericType_
   (System_Collections_Generic_List_T__o* list, System_Random_o* rng, const MethodInfo_26EC22C*
   method); */

void Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle___Il2CppFullySharedGenericType__26ec22c
               (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_90;
  long *plStack_88;
  uint *puStack_80;
  undefined8 *puStack_78;
  uint uStack_6c;
  long lStack_68;
  
  lStack_90 = tpidr_el0;
  lStack_68 = *(long *)(lStack_90 + 0x28);
  lVar5 = *(long *)(param_3 + 0x38);
  plStack_88 = param_2;
  if (lVar5 == 0) {
    FUN_0216b4cc(param_3);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  uVar6 = (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0xfc);
  uVar4 = uVar6 + 0xf & 0x1fffffff0;
  lVar7 = (long)&lStack_90 - uVar4;
  puVar8 = (undefined8 *)(lVar7 - uVar4);
  puVar9 = (undefined8 *)((long)puVar8 - uVar4);
  lVar10 = (long)puVar9 - uVar4;
  func_0x049b52e0(lVar10,0,uVar6);
  if (param_1 == 0) {
LAB_027ec42c:
    if (*(long *)(lStack_90 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)(lVar5 + 8))(param_1);
    if (0 < (int)(uVar2 - 1)) {
      if (plStack_88 == (long *)0x0) goto LAB_027ec42c;
      do {
        uVar1 = uVar2 - 1;
        uVar2 = (**(code **)(*plStack_88 + 0x1a8))
                          (plStack_88,uVar2,*(undefined8 *)(*plStack_88 + 0x1b0));
        puVar3 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x10);
        puStack_80 = &uStack_6c;
        puStack_78 = (undefined8 *)lVar7;
        uStack_6c = uVar1;
        (*(code *)puVar3[2])(*puVar3,puVar3,param_1,&puStack_80,lVar7);
        func_0x049b5410(lVar10,lVar7,uVar6);
        puVar3 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x10);
        puStack_80 = &uStack_6c;
        puStack_78 = puVar8;
        uStack_6c = uVar2;
        (*(code *)puVar3[2])(*puVar3,puVar3,param_1,&puStack_80,puVar8);
        puStack_78 = puVar8;
        if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x18) + 0x28)) {
          puStack_78 = (undefined8 *)*puVar8;
        }
        puVar3 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x20);
        puStack_80 = &uStack_6c;
        uStack_6c = uVar1;
        (*(code *)puVar3[2])(*puVar3,puVar3,param_1,&puStack_80);
        func_0x049b5410(puVar9,lVar10,uVar6);
        puVar3 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x20);
        puStack_78 = puVar9;
        if (-1 < *(int *)(*(long *)(*(long *)(param_3 + 0x38) + 0x18) + 0x28)) {
          puStack_78 = (undefined8 *)*puVar9;
        }
        puStack_80 = &uStack_6c;
        uStack_6c = uVar2;
        (*(code *)puVar3[2])(*puVar3,puVar3,param_1,&puStack_80);
        uVar2 = uVar1;
      } while (1 < (int)uVar1);
    }
    if (*(long *)(lStack_90 + 0x28) == lStack_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

