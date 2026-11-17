/* IL2CPP: Dino.BusSand.View.GameView$$OnDestroy
void Dino_BusSand_View_GameView__OnDestroy (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$OnDestroy
   void Dino_BusSand_View_GameView__OnDestroy (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__OnDestroy_23ab304(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f9c951 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc330);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbc340);
    bRam0000000004f9c951 = 1;
  }
  puVar1 = PTR_DAT_04cad568;
  if (*(char *)(param_1 + 0x274) != '\0') {
    *(undefined1 *)(param_1 + 0x274) = 0;
    UnityEngine_Time__set_timeScale_43cd6d8(0x3f800000,0);
  }
  puVar3 = PTR_DAT_04cbc340;
  puVar2 = PTR_DAT_04cbc330;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Func_Vector3__float____ctor_37a5200(uVar5,param_1,*(undefined8 *)puVar3,0);
  uVar6 = System_Delegate__op_Equality_4877acc(uVar8,uVar5,0);
  if ((uVar6 & 1) != 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
    *puVar7 = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                   ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

