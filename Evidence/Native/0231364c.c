/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ItemsCleared
int32_t Dino_BusSand_App_Meta_GameTracking__ItemsCleared (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$ItemsCleared
   int32_t Dino_BusSand_App_Meta_GameTracking__ItemsCleared (const MethodInfo* method); */

int Dino_BusSand_App_Meta_GameTracking__ItemsCleared_221364c(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  puVar4 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd48 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bd48 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Meta_GameTracking__get_Gc_2210df0();
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    iVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    iVar5 = *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    iVar2 = iVar5 - *(int *)(lVar6 + 0x24);
    iVar1 = iVar2;
    if (iVar5 <= iVar2) {
      iVar1 = iVar5;
    }
    iVar5 = 0;
    if (-1 < iVar2) {
      iVar5 = iVar1;
    }
  }
  return iVar5;
}

