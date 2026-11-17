/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnClicked
void Dino_BusSand_App_Meta_JourneyTracking__OnClicked (UnityEngine_GameObject_o* go, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$OnClicked
   void Dino_BusSand_App_Meta_JourneyTracking__OnClicked (UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__OnClicked_221d630(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bda4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb28b0);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab330);
    bRam0000000004f9bda4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = UnityEngine_GameObject__GetComponentInParent_object__275ab94
                      (param_1,*(undefined8 *)PTR_DAT_04cb28b0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
    puVar6 = (undefined8 *)PTR_DAT_04cab330;
    if ((uVar2 & 1) != 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar2 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar3 + 0x20),0);
      if ((uVar2 & 1) == 0) {
        puVar6 = (undefined8 *)(lVar3 + 0x20);
      }
    }
    uVar5 = *puVar6;
    uVar4 = UnityEngine_Object__get_name_43c71a4(param_1,0);
    if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_JourneyTracking__UiNamed_221d1c8(2,uVar5,uVar4);
  }
  return;
}

