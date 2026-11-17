/* IL2CPP: Dino.BusSand.App.UI.KitBake$$Clear
void Dino_BusSand_App_UI_KitBake__Clear (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitBake$$Clear
   void Dino_BusSand_App_UI_KitBake__Clear (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitBake__Clear_2280628(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cb4ce0;
  if ((bRam0000000004f9c13e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4ce8);
    FUN_02132f7c(PTR_DAT_04cb4cf0);
    FUN_02132f7c(PTR_DAT_04cb4ce0);
    bRam0000000004f9c13e = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    System_Collections_Generic_Dictionary_object__KitBake_Made___Clear_34f8cbc
              (lVar3,*(undefined8 *)PTR_DAT_04cb4ce8);
    lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x20);
      if (0 < iVar1) {
        lVar4 = *(long *)(lVar3 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0,*(undefined8 *)PTR_DAT_04cb4cf0);
        }
        System_Array__Clear_4851dc8(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
        *(undefined4 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0xffffffff00000000;
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar3 + 0x18),0,iVar1,0);
      }
      *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

