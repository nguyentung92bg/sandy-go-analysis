/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$ClearCache
void Dino_BusSand_View_MaterialLibrary__ClearCache (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$ClearCache
   void Dino_BusSand_View_MaterialLibrary__ClearCache (const MethodInfo* method); */

void Dino_BusSand_View_MaterialLibrary__ClearCache_23bb5e0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c9a4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbcbe0);
    FUN_02132f7c(PTR_DAT_04cbcbe8);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    bRam0000000004f9c9a4 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    System_Collections_Generic_Dictionary_int__object___Clear_34374b4
              (**(long **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_04cbcbe0);
    lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x20);
      if (0 < iVar1) {
        lVar4 = *(long *)(lVar3 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224(0,*(undefined8 *)PTR_DAT_04cbcbe8);
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

