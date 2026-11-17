/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<>c__DisplayClass22_0$$<SetItem>b__1
void Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0___SetItem_b__1 (Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022e518c) */
/* WARNING: Removing unreachable block (ram,0x022e51b4) */
/* WARNING: Removing unreachable block (ram,0x022e51bc) */
/* WARNING: Removing unreachable block (ram,0x022e51d0) */
/* WARNING: Removing unreachable block (ram,0x022e51e0) */
/* WARNING: Removing unreachable block (ram,0x022e51f4) */
/* WARNING: Removing unreachable block (ram,0x022e5204) */
/* WARNING: Removing unreachable block (ram,0x022e5250) */
/* WARNING: Removing unreachable block (ram,0x022e5214) */
/* WARNING: Removing unreachable block (ram,0x02300fcc) */
/* WARNING: Removing unreachable block (ram,0x02300fb4) */
/* WARNING: Removing unreachable block (ram,0x044c3ce4) */
/* WARNING: Removing unreachable block (ram,0x044c3cc0) */
/* WARNING: Removing unreachable block (ram,0x044c3cd0) */
/* WARNING: Removing unreachable block (ram,0x044c3d7c) */
/* WARNING: Removing unreachable block (ram,0x044c3d90) */
/* WARNING: Removing unreachable block (ram,0x044c3d94) */
/* WARNING: Removing unreachable block (ram,0x044c3d9c) */
/* WARNING: Removing unreachable block (ram,0x044c3da8) */
/* WARNING: Removing unreachable block (ram,0x044c3db4) */
/* WARNING: Removing unreachable block (ram,0x044c3dc8) */
/* WARNING: Removing unreachable block (ram,0x044c3ddc) */
/* WARNING: Removing unreachable block (ram,0x044c3d18) */
/* WARNING: Removing unreachable block (ram,0x044c3d48) */
/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<>c__DisplayClass22_0$$<SetItem>b__1
   void Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0___SetItem_b__1
   (Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
    */

ulong Dino_BusSand_App_UI_StreakRatePanel___c__DisplayClass22_0___SetItem_b__1_21e56fc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar1 = *(int *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if ((bRam0000000004f9bbc4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0d40);
    bRam0000000004f9bbc4 = 1;
  }
  if (iVar1 == 2) {
    uVar9 = *(undefined8 *)(lVar7 + 0x70);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__op_Equality_43c6f30(uVar9,uVar6,0);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bbc6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0d40);
    bRam0000000004f9bbc6 = 1;
  }
  uVar6 = *(undefined8 *)(lVar7 + 0x70);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  puVar2 = PTR_DAT_04cb0d40;
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  *(undefined8 *)(lVar7 + 0x70) = 0;
  thunk_FUN_02134474((undefined8 *)(lVar7 + 0x70),0);
  puVar3 = PTR_DAT_04ca9ae8;
  uVar6 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar6,0,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar7,uVar6);
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if ((lVar7 == 0) || (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar8 == 0)
       ) goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,0,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (lVar7 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar2 = PTR_DAT_04cf7650;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar7,0);
    }
    if (pcRam0000000004fa8318 == (code *)0x0) {
      pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
    }
    uVar4 = (*pcRam0000000004fa8318)(lVar8);
    lVar7 = *(long *)puVar2;
    if (*(long *)(lVar7 + 0x38) == 0) {
      FUN_0216b4cc(lVar7);
    }
    if (uVar4 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar4 & 1) == 0) {
        plVar5 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar8 = *plVar5;
      }
      else {
        lVar8 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar4,0);
      }
      lVar7 = **(long **)(lVar7 + 0x38);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470(lVar7);
      }
      if (lVar8 != 0) {
        uVar4 = thunk_FUN_0216e7a0(lVar8,lVar7);
        if (uVar4 != 0) {
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar8,lVar7);
      }
    }
    return 0;
  }
LAB_022f4104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

