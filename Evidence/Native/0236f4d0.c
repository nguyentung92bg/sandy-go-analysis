/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_MaxHearts
int32_t Dino_BusSand_App_Meta_Profile__get_MaxHearts (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_MaxHearts
   int32_t Dino_BusSand_App_Meta_Profile__get_MaxHearts (const MethodInfo* method); */

int Dino_BusSand_App_Meta_Profile__get_MaxHearts_226f4d0(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0df & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0df = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar4 = **(long **)(lVar3 + 0xb8);
  if (lVar4 == 0) {
    iVar2 = 5;
  }
  else {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    iVar2 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
    ;
    iVar2 = iVar2 + 5;
  }
  return iVar2;
}

