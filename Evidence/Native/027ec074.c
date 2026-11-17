/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$Shuffle<int>
void Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_int_ (System_Collections_Generic_List_T__o* list, System_Random_o* rng, const MethodInfo_26EC074* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleRules$$Shuffle<int>
   void Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_int_ (System_Collections_Generic_List_T__o*
   list, System_Random_o* rng, const MethodInfo_26EC074* method); */

void Dino_BusSand_App_Meta_BattleRoyaleRules__Shuffle_int__26ec074
               (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_0216b4cc(param_3);
  }
  if (param_1 != 0) {
    if (0 < (int)(*(uint *)(param_1 + 0x18) - 1)) {
      uVar5 = *(uint *)(param_1 + 0x18);
      if (param_2 == (long *)0x0) goto LAB_027ec14c;
      do {
        uVar1 = uVar5 - 1;
        uVar2 = (**(code **)(*param_2 + 0x1a8))(param_2,uVar5,*(undefined8 *)(*param_2 + 0x1b0));
        uVar3 = System_Collections_Generic_List_int___get_Item_3a2bd74
                          (param_1,uVar1,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
        uVar4 = System_Collections_Generic_List_int___get_Item_3a2bd74
                          (param_1,uVar2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
        System_Collections_Generic_List_int___set_Item_3a2bdc8
                  (param_1,uVar1,uVar4,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
        System_Collections_Generic_List_int___set_Item_3a2bdc8
                  (param_1,uVar2,uVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
        uVar5 = uVar1;
      } while (1 < uVar1);
    }
    return;
  }
LAB_027ec14c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

