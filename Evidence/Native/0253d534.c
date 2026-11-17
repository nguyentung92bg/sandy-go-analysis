/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate.<>c$$<Install>b__0_1
void Dino_BusSand_Sdk_SandBusUpdateGate___c___Install_b__0_1 (Dino_BusSand_Sdk_SandBusUpdateGate___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusUpdateGate.<>c$$<Install>b__0_1
   void Dino_BusSand_Sdk_SandBusUpdateGate___c___Install_b__0_1
   (Dino_BusSand_Sdk_SandBusUpdateGate___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusUpdateGate___c___Install_b__0_1_243d534(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plStack_18;
  
  puVar1 = PTR_DAT_04cbf5e0;
  if ((bRam0000000004f9cc86 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cbf5e8);
    FUN_02132f7c(PTR_DAT_04cbf5e0);
    FUN_02132f7c(PTR_DAT_04cb1c20);
    bRam0000000004f9cc86 = 1;
  }
  plStack_18 = (long *)0x0;
  uVar3 = Sisus_Init_Service__TryGet_object__28b2b2c(&plStack_18,*(undefined8 *)puVar1);
  plVar2 = plStack_18;
  puVar1 = PTR_DAT_04cb1c20;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Application__get_identifier_43526b4(0);
    uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar5,0);
    UnityEngine_Application__OpenURL_4352a5c(uVar5,0);
  }
  else {
    if (plStack_18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *plStack_18;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04cbf5e8) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0253d644;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(plStack_18,*(long *)PTR_DAT_04cbf5e8,1);
LAB_0253d644:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}

