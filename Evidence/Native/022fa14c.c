/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.AliveFn$$.ctor
void Dino_BusSand_App_UI_MechanicGuide_AliveFn___ctor (Dino_BusSand_App_UI_MechanicGuide_AliveFn_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.AliveFn$$.ctor
   void Dino_BusSand_App_UI_MechanicGuide_AliveFn___ctor
   (Dino_BusSand_App_UI_MechanicGuide_AliveFn_o* __this, Il2CppObject* object, intptr_t method,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_MechanicGuide_AliveFn___ctor_21fa14c
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(long *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_02134474();
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar2 = FUN_02133080(param_3);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      uVar3 = thunk_FUN_0217bb8c(0,&UNK_00e5b8f7);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar3,0);
    }
  }
  else if (cVar1 == '\0') {
    *(code **)(param_1 + 0x18) = FUN_01e786d0;
    goto LAB_022fa1b4;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
LAB_022fa1b4:
  *(code **)(param_1 + 0x38) = FUN_01e78684;
  return;
}

