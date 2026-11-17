/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$RefillLives
void Dino_BusSand_Cheat_CheatManager__RefillLives (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$RefillLives
   void Dino_BusSand_Cheat_CheatManager__RefillLives (Dino_BusSand_Cheat_CheatManager_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__RefillLives_23670b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c761 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    FUN_02132f7c(PTR_DAT_04cba970);
    bRam0000000004f9c761 = 1;
  }
  puVar3 = PTR_DAT_04cba970;
  puVar2 = PTR_DAT_04cabd10;
  uStack_24 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
  Dino_BusSand_App_Meta_Profile__AddHearts_227275c(uVar4,0);
  Dino_BusSand_App_Meta_Profile__Save_226c548(0);
  uStack_24 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(0);
  uVar4 = System_Int32__ToString_482d750(&uStack_24,0);
  uStack_24 = Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(0);
  uVar5 = System_Int32__ToString_482d750(&uStack_24,0);
  uVar4 = System_String__Concat_46d30e8(*(undefined8 *)puVar3,uVar4,*(undefined8 *)puVar2,uVar5,0);
  Dino_BusSand_Cheat_CheatManager__Toast_235dbd8(param_1,uVar4);
  return;
}

