/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Flag
bool Dino_BusSand_App_Meta_Profile__Flag (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Flag
   bool Dino_BusSand_App_Meta_Profile__Flag (System_String_o* name, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_Profile__Flag_22736a4(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c109 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad298);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c109 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      iVar2 = System_Array__IndexOf_object__297e5c0
                        (*(undefined8 *)(lVar3 + 0x10),param_1,0,*(int *)(lVar3 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_04cad298 + 0x20) + 0xc0) + 0xd0) + 0x20) +
                                    0xc0) + 0x150));
      return iVar2 != -1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

