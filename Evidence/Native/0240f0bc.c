/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$MarkFreeUsed
void Dino_BusSand_App_UI_HudPanel__MarkFreeUsed (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$MarkFreeUsed
   void Dino_BusSand_App_UI_HudPanel__MarkFreeUsed (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t
   id, const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__MarkFreeUsed_230f0bc(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04cb1980;
  puVar1 = PTR_DAT_04cabaf8;
  uStack_24 = param_2;
  if ((bRam0000000004f9c533 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb1980);
    bRam0000000004f9c533 = 1;
  }
  uVar3 = System_Int32__ToString_482d750(&uStack_24,0);
  uVar3 = System_String__Concat_46c82e0(*(undefined8 *)puVar2,uVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar3,1,0);
  return;
}

