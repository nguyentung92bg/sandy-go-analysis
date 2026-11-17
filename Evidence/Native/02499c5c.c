/* IL2CPP: Dino.BusSand.View.Fx$$Clear
void Dino_BusSand_View_Fx__Clear (Dino_BusSand_View_Fx_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$Clear
   void Dino_BusSand_View_Fx__Clear (Dino_BusSand_View_Fx_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_Fx__Clear_2399c5c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_04cbc280;
  if ((bRam0000000004f9c8f6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc280);
    bRam0000000004f9c8f6 = 1;
  }
  lVar2 = FUN_02133068(*(undefined8 *)puVar1,7);
  if (lVar2 == 0) {
LAB_02499e14:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20));
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
      thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
        thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
          thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38));
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
            thunk_FUN_02134474((undefined8 *)(lVar2 + 0x40));
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
              thunk_FUN_02134474((undefined8 *)(lVar2 + 0x48));
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
                thunk_FUN_02134474((undefined8 *)(lVar2 + 0x50));
                puVar1 = PTR_DAT_04ca9ae8;
                if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
                  uVar5 = 0;
                  uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
                  do {
                    if (uVar3 <= uVar5) goto LAB_02499e10;
                    lVar4 = *(long *)(lVar2 + 0x20 + uVar5 * 8);
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
                    if ((uVar3 & 1) != 0) {
                      if (lVar4 == 0) goto LAB_02499e14;
                      UnityEngine_ParticleSystem__Clear_443649c(lVar4,0);
                    }
                    uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
                    uVar5 = uVar5 + 1;
                  } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02499e10:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

