/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Walk
void Dino_BusSand_Cheat_CheatUiHider__Walk (Dino_BusSand_Cheat_CheatUiHider_o* __this, UnityEngine_Transform_o* node, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatUiHider$$Walk
   void Dino_BusSand_Cheat_CheatUiHider__Walk (Dino_BusSand_Cheat_CheatUiHider_o* __this,
   UnityEngine_Transform_o* node, const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatUiHider__Walk_236f3ac(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((bRam0000000004f9c7bc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbaf80);
    bRam0000000004f9c7bc = 1;
  }
  if (param_2 != 0) {
    iVar2 = UnityEngine_Transform__get_childCount_43d4480(param_2,0);
    puVar1 = PTR_DAT_04cbaf80;
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        uVar4 = UnityEngine_Transform__GetChild_43d5294(param_2,iVar2,0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_0246f490;
        uVar5 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                          (*(long *)(param_1 + 0x30),uVar4,*(undefined8 *)puVar1);
        if ((uVar5 & 1) == 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_0246f490;
          uVar5 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                            (*(long *)(param_1 + 0x28),uVar4,*(undefined8 *)puVar1);
          if ((uVar5 & 1) == 0) {
            Dino_BusSand_Cheat_CheatUiHider__Hide_236f16c(param_1,uVar4);
          }
          else {
            Dino_BusSand_Cheat_CheatUiHider__Walk_236f3ac(param_1,uVar4);
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = UnityEngine_Transform__get_childCount_43d4480(param_2,0);
      } while (iVar2 < iVar3);
    }
    return;
  }
LAB_0246f490:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

