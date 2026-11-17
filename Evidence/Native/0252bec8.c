/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Heading
void Dino_BusSand_Core_BusGeometry__Heading (int32_t a, double* hx, double* hz, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.BusGeometry$$Heading
   void Dino_BusSand_Core_BusGeometry__Heading (int32_t a, double* hx, double* hz, const MethodInfo*
   method); */

void Dino_BusSand_Core_BusGeometry__Heading_242bec8
               (int param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_04cbc080;
  if ((bRam0000000004f9cbc9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    bRam0000000004f9cbc9 = 1;
  }
  lVar4 = *(long *)puVar3;
  uVar2 = param_1 % 0x18;
  uVar1 = uVar2 + 0x18;
  if (uVar2 < 0xffffffe8) {
    uVar1 = uVar2;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  lVar5 = **(long **)(lVar4 + 0xb8);
  if (lVar5 != 0) {
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      lVar4 = (*(long **)(lVar4 + 0xb8))[1];
      *param_2 = *(undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_0252bf9c;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *param_3 = *(undefined8 *)(lVar4 + (ulong)uVar1 * 8 + 0x20);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_0252bf9c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

