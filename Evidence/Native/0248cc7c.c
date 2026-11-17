/* IL2CPP: Dino.BusSand.TweenRunner$$EnsureInstance
void Dino_BusSand_TweenRunner__EnsureInstance (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.TweenRunner$$EnsureInstance
   void Dino_BusSand_TweenRunner__EnsureInstance (const MethodInfo* method); */

void Dino_BusSand_TweenRunner__EnsureInstance_238cc7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_04cbbe20;
  if ((bRam0000000004f9c8ad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbeb0);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbbe20);
    FUN_02132f7c(PTR_DAT_04cac2b0);
    bRam0000000004f9c8ad = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  lVar6 = *(long *)puVar1;
  uVar7 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  puVar2 = PTR_DAT_04cac2b0;
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c20cc(lVar4,*(undefined8 *)puVar2,0);
  if (lVar4 != 0) {
    UnityEngine_Object__set_hideFlags_43c8654(lVar4,1,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__DontDestroyOnLoad_43c8450(lVar4,0);
    uVar7 = UnityEngine_GameObject__AddComponent_object__275a54c
                      (lVar4,*(undefined8 *)PTR_DAT_04cbbeb0);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
      lVar4 = *(long *)puVar3;
    }
    **(undefined8 **)(lVar4 + 0xb8) = uVar7;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar3 + 0xb8) >> 0xc & 0x3f),
                   (*(ulong *)(*(long *)puVar3 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

