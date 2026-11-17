/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel.<>c__DisplayClass17_0$$<Board>b__0
int32_t Dino_BusSand_App_Meta_WeeklyCupModel___c__DisplayClass17_0___Board_b__0 (Dino_BusSand_App_Meta_WeeklyCupModel___c__DisplayClass17_0_o* __this, int32_t a, int32_t b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel.<>c__DisplayClass17_0$$<Board>b__0
   int32_t Dino_BusSand_App_Meta_WeeklyCupModel___c__DisplayClass17_0___Board_b__0
   (Dino_BusSand_App_Meta_WeeklyCupModel___c__DisplayClass17_0_o* __this, int32_t a, int32_t b,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_WeeklyCupModel___c__DisplayClass17_0___Board_b__0_22316a4
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  if ((bRam0000000004f9be7c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae230);
    bRam0000000004f9be7c = 1;
  }
  puVar1 = PTR_DAT_04cae230;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_28 = System_Collections_Generic_List_int___get_Item_3a2bd74
                          (*(long *)(param_1 + 0x10),param_3,*(undefined8 *)PTR_DAT_04cae230);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = System_Collections_Generic_List_int___get_Item_3a2bd74
                        (*(long *)(param_1 + 0x10),param_2,*(undefined8 *)puVar1);
      iVar3 = System_Int32__CompareTo_482d6dc(&uStack_28,uVar2,0);
      if (iVar3 == 0) {
        System_Int32__CompareTo_482d6dc(&uStack_24,param_3,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

