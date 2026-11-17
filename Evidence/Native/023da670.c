/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Dive
float Dino_BusSand_App_UI_HomeAtelier__Dive (Dino_BusSand_App_UI_HomeAtelier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Dive
   float Dino_BusSand_App_UI_HomeAtelier__Dive (Dino_BusSand_App_UI_HomeAtelier_o* __this, const
   MethodInfo* method); */

undefined4 Dino_BusSand_App_UI_HomeAtelier__Dive_22da670(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9c3e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7068);
    FUN_02132f7c(PTR_DAT_04cb7070);
    FUN_02132f7c(PTR_DAT_04cb7078);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb7080);
    FUN_02132f7c(PTR_DAT_04cb7088);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c3e3 = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  lVar4 = Dino_BusSand_App_UI_HomeAtelier__Find_22d75bc(param_1,*(undefined4 *)(param_1 + 0x58));
  if ((lVar4 == 0) ||
     (uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0), (uVar5 & 1) == 0)) {
    return 0;
  }
  UnityEngine_MonoBehaviour__StopAllCoroutines_43c4224(param_1,0);
  uVar8 = NEON_fmov(0x3f800000,4);
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  puVar2 = PTR_DAT_04ca9ae8;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  lVar6 = *(long *)puVar2;
  *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x90) = uVar8;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  puVar3 = PTR_DAT_04cad568;
  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar3;
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Pencil_23854a0(0,0x3f800000,**(long **)(lVar6 + 0xb8),0);
  }
  *(undefined1 *)(param_1 + 0xd4) = 1;
  if (*(long *)(param_1 + 0x128) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_78,*(long *)(param_1 + 0x128),*(undefined8 *)PTR_DAT_04cb7088);
    puVar3 = PTR_DAT_04cb7070;
    puStack_58 = puStack_70;
    uStack_60 = uStack_78;
    lStack_50 = lStack_68;
    uStack_78 = 0;
    puStack_70 = &uStack_60;
    while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_60,*(undefined8 *)puVar3), lVar6 = lStack_50, (uVar5 & 1) != 0
          ) {
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar7 = *(undefined8 *)(lStack_50 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar6 + 0x10),0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Object__Destroy_43c8114(uVar7,0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_60,*(undefined8 *)PTR_DAT_04cb7068);
    lVar6 = *(long *)(param_1 + 0x128);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      if (*(long *)(param_1 + 0x100) != 0) {
        Dino_BusSand_App_UI_HomeStage__DriveOff_22ef9a0(*(long *)(param_1 + 0x100),0);
      }
      uVar7 = Dino_BusSand_App_UI_HomeAtelier__DiveRoutine_22da9ac(param_1,lVar4);
      UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar7,0);
      return _UNK_00e201f4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

