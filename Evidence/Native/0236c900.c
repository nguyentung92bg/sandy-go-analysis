/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$Raise
void Dino_BusSand_App_Meta_PlayerIdentity__Raise (int32_t a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$Raise
   void Dino_BusSand_App_Meta_PlayerIdentity__Raise (int32_t a, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PlayerIdentity__Raise_226c900(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0db & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c0db = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28))
    ;
  }
  return;
}

