/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Bottom
float Dino_BusSand_App_UI_HomeAtelier__Bottom (Dino_BusSand_App_UI_HomeAtelier_o* __this, System_String_o* path, float fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Bottom
   float Dino_BusSand_App_UI_HomeAtelier__Bottom (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   System_String_o* path, float fallback, const MethodInfo* method); */

float Dino_BusSand_App_UI_HomeAtelier__Bottom_22d558c
                (float param_1,float param_2,undefined1 param_3 [16],float param_4,long param_5,
                undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long *plStack_38;
  
  if ((bRam0000000004f9c3cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6f10);
    FUN_02132f7c(PTR_DAT_04cb6f18);
    FUN_02132f7c(PTR_DAT_04cac6c0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c3cf = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  plStack_38 = (long *)0x0;
  if (*(long *)(param_5 + 0x108) == 0) goto LAB_023d5844;
  uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (*(long *)(param_5 + 0x108),param_6,&plStack_38,*(undefined8 *)PTR_DAT_04cb6f10)
  ;
  plVar7 = plStack_38;
  if ((uVar2 & 1) == 0) {
LAB_023d5654:
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_023d5844;
    uVar3 = UnityEngine_Transform__get_parent_43d0d70(*(long *)(param_5 + 0x20),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    plVar7 = (long *)0x0;
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_5 + 0x20) == 0) ||
         (lVar4 = UnityEngine_Transform__get_parent_43d0d70(*(long *)(param_5 + 0x20),0), lVar4 == 0
         )) goto LAB_023d5844;
      plVar7 = (long *)UnityEngine_Transform__Find_43d4bec(lVar4,param_6,0);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else if (*plVar7 != *(long *)PTR_DAT_04cabdb0) {
        plVar7 = (long *)0x0;
      }
    }
    plStack_38 = plVar7;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_5 + 0x108) == 0) goto LAB_023d5844;
      System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                (*(long *)(param_5 + 0x108),param_6,plStack_38,*(undefined8 *)PTR_DAT_04cb6f18);
    }
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(plVar7,0,0);
    if ((uVar2 & 1) != 0) goto LAB_023d5654;
  }
  plVar7 = plStack_38;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(plVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return param_1;
  }
  if ((plStack_38 != (long *)0x0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(plStack_38,0), lVar4 != 0)) {
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar4,0);
    puVar1 = PTR_DAT_04cac6c0;
    if ((uVar2 & 1) == 0) {
      return param_1;
    }
    lVar4 = *(long *)PTR_DAT_04cac6c0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar1;
    }
    if (plStack_38 != (long *)0x0) {
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
      UnityEngine_RectTransform__GetWorldCorners_43d0720(plStack_38,lVar4,0);
      if (lVar4 != 0) {
        if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
          fVar5 = 3.4028235e+38;
        }
        else {
          uVar2 = 0;
          uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
          fVar5 = 3.4028235e+38;
          puVar8 = (undefined4 *)(lVar4 + 0x28);
          do {
            if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            if (*(long *)(param_5 + 0x20) == 0) goto LAB_023d5844;
            param_2 = (float)puVar8[-1];
            UnityEngine_Transform__InverseTransformPoint_43d3ffc
                      (puVar8[-2],param_2,*puVar8,*(long *)(param_5 + 0x20),0);
            uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
            uVar2 = uVar2 + 1;
            puVar8 = puVar8 + 3;
            if (param_2 <= fVar5) {
              fVar5 = param_2;
            }
          } while ((long)uVar2 < (long)(int)*(uint *)(lVar4 + 0x18));
        }
        if (*(long *)(param_5 + 0x20) != 0) {
          UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_5 + 0x20),0);
          return (param_4 + param_2) - fVar5;
        }
      }
    }
  }
LAB_023d5844:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

