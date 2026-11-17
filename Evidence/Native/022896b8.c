/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$ApplyLevelBg
void Dino_BusSand_App_UI_ActivityQuitFlow__ApplyLevelBg (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, bool activityBg, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$ApplyLevelBg
   void Dino_BusSand_App_UI_ActivityQuitFlow__ApplyLevelBg (Dino_BusSand_App_UI_ActivityQuitFlow_o*
   __this, bool activityBg, const MethodInfo* method); */

long Dino_BusSand_App_UI_ActivityQuitFlow__ApplyLevelBg_21896b8(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b96e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cadb68);
    FUN_02132f7c(PTR_DAT_04cadb70);
    FUN_02132f7c(PTR_DAT_04cadb78);
    FUN_02132f7c(PTR_DAT_04cadb80);
    FUN_02132f7c(PTR_DAT_04cadb88);
    FUN_02132f7c(PTR_DAT_04cadb90);
    FUN_02132f7c(PTR_DAT_04cadb98);
    bRam0000000004f9b96e = 1;
  }
  puVar2 = PTR_DAT_04cacb18;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04caa038;
  uVar4 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(uVar4,0);
  iVar5 = Dino_BusSand_App_Levels_LevelDatabase__TypeOf_229adf4(uVar6,0);
  lVar7 = FUN_02133068(*(undefined8 *)puVar1,3);
  if (lVar7 == 0) goto LAB_02289a0c;
  if (*(int *)(lVar7 + 0x18) == 0) {
LAB_02289a10:
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_04cadb68;
  thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20));
  if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_02289a10;
  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)PTR_DAT_04cadb70;
                    /* try { // try from 0228982c to 02389873 has its CatchHandler @ 0228982c
                       catch() { ... } // from try @ 0228982c with catch @ 0228982c
                       catch() { ... } // from try @ 022899d4 with catch @ 0228982c
                       catch() { ... } // from try @ 02289a64 with catch @ 0228982c */
  thunk_FUN_02134474((undefined8 *)(lVar7 + 0x28));
  if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_02289a10;
  *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_04cadb98;
  thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30));
  puVar2 = PTR_DAT_04cadb88;
  puVar1 = PTR_DAT_04ca9ae8;
  if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
    uVar12 = 0;
                    /* try { // try from 02289874 to 0238987f has its CatchHandler @ 02289a8c */
    uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
    do {
      if (uVar10 <= uVar12) goto LAB_02289a10;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_02289a0c;
      lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                        (*(long *)(param_1 + 0x10),*(undefined8 *)(lVar7 + 0x20 + uVar12 * 8),0);
      lVar11 = *(long *)puVar1;
                    /* try { // try from 022898a8 to 023898ab has its CatchHandler @ 02289a88 */
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar11);
      }
                    /* try { // try from 022898bc to 023899d3 has its CatchHandler @ 02289a90 */
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
      lVar11 = 0;
      if ((uVar10 & 1) != 0) {
        if (lVar8 == 0) goto LAB_02289a0c;
        lVar11 = UnityEngine_Transform__Find_43d4bec(lVar8,*(undefined8 *)puVar2,0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
      if ((uVar10 & 1) != 0) {
        if ((lVar11 == 0) ||
           (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar11,0), lVar8 == 0))
        goto LAB_02289a0c;
        UnityEngine_GameObject__SetActive_43c1408(lVar8,(param_2 ^ 1) & 1,0);
      }
      uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)*(uint *)(lVar7 + 0x18));
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if ((param_2 & 1) == 0) {
    if (lVar7 == 0) goto LAB_02289a0c;
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar7,*(undefined8 *)PTR_DAT_04cadb78,0,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02289a0c;
    Dino_BusSand_App_UI_UIPanel__Show_21f4018
              (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cadb80,0,0);
                    /* try { // try from 022899d4 to 02389a5b has its CatchHandler @ 0228982c */
    bVar3 = false;
  }
  else {
    if (lVar7 == 0) goto LAB_02289a0c;
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar7,*(undefined8 *)PTR_DAT_04cadb78,iVar5 == 2,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_02289a0c;
    Dino_BusSand_App_UI_UIPanel__Show_21f4018
              (*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_04cadb80,iVar5 == 1,0);
    bVar3 = iVar5 == 0;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
LAB_02289a0c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = *(undefined8 *)PTR_DAT_04cadb90;
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar6,bVar3,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar7,uVar6);
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar12 & 1) != 0) {
    if ((lVar7 == 0) || (lVar8 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0), lVar8 == 0)
       ) goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar8,bVar3,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  if (lVar7 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar1 = PTR_DAT_04cf7650;
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
    uVar12 = (*pcRam0000000004fa8318)(lVar8);
    lVar7 = *(long *)puVar1;
    if (*(long *)(lVar7 + 0x38) == 0) {
      FUN_0216b4cc(lVar7);
    }
    if (uVar12 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar12 & 1) == 0) {
        plVar9 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar8 = *plVar9;
      }
      else {
        lVar8 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar12,0);
      }
      lVar7 = **(long **)(lVar7 + 0x38);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470(lVar7);
      }
      if (lVar8 != 0) {
        lVar11 = thunk_FUN_0216e7a0(lVar8,lVar7);
        if (lVar11 != 0) {
          return lVar11;
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

