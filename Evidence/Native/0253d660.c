/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate.<>c$$<Install>b__0_2
void Dino_BusSand_Sdk_SandBusUpdateGate___c___Install_b__0_2 (Dino_BusSand_Sdk_SandBusUpdateGate___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate.<>c$$<Install>b__0_2
   void Dino_BusSand_Sdk_SandBusUpdateGate___c___Install_b__0_2
   (Dino_BusSand_Sdk_SandBusUpdateGate___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusUpdateGate___c___Install_b__0_2_243d660(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plStack_18;
  
  puVar1 = PTR_DAT_04cbf5e0;
  if ((bRam0000000004f9cc87 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf5e8);
    FUN_02132f7c(PTR_DAT_04cbf5e0);
    bRam0000000004f9cc87 = 1;
  }
  plStack_18 = (long *)0x0;
  uVar3 = Sisus_Init_Service__TryGet_object__28b2b2c(&plStack_18,*(undefined8 *)puVar1);
  plVar2 = plStack_18;
  if ((uVar3 & 1) != 0) {
    if (plStack_18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar5 = *plStack_18;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04cbf5e8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_0253d710;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(plStack_18,*(long *)PTR_DAT_04cbf5e8,3);
LAB_0253d710:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}

